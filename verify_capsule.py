#!/usr/bin/env python3
"""
verify_capsule.py — Verifies the __PROJECT capsule in a patched Installer binary

Usage:
  python3 verify_capsule.py path/to/Installer
"""
import struct
import sys
import zlib

MH_MAGIC_64 = 0xFEEDFACF
LC_SEGMENT_64 = 0x19

kEpilogue    = 0
kPrologue    = 1
kDigest      = 2
kMainStack   = 3
kScriptOnlyMainStack = 4
kAuxStack    = 7
kScriptOnlyAux = 8
kStartupScript = 10
kLicense     = 13  # what engine calls it

SECTION_TYPE_NAMES = {
    kEpilogue: "Epilogue",
    kPrologue: "Prologue",
    kDigest:   "Digest",
    kMainStack: "MainStack",
    kScriptOnlyMainStack: "ScriptOnlyMainStack",
    kAuxStack: "AuxStack",
    kScriptOnlyAux: "ScriptOnlyAux",
    kStartupScript: "StartupScript",
    kLicense: "License/EditionFlags",
}

def read_le32(data, off):
    return struct.unpack_from("<I", data, off)[0]
def read_le64(data, off):
    return struct.unpack_from("<Q", data, off)[0]

def find_project_segment(data):
    magic = read_le32(data, 0)
    if magic != MH_MAGIC_64:
        print(f"ERROR: Not a 64-bit Mach-O (magic=0x{magic:08x})")
        return None, None
    ncmds = read_le32(data, 16)
    offset = 32
    for _ in range(ncmds):
        cmd  = read_le32(data, offset)
        size = read_le32(data, offset + 4)
        if cmd == LC_SEGMENT_64:
            name = data[offset+8:offset+24].rstrip(b'\x00').decode()
            vmaddr   = read_le64(data, offset + 24)
            vmsize   = read_le64(data, offset + 32)
            fileoff  = read_le64(data, offset + 40)
            filesize = read_le64(data, offset + 48)
            nsects   = read_le32(data, offset + 64)
            if name == "__PROJECT":
                print(f"  __PROJECT: vmaddr=0x{vmaddr:x} vmsize=0x{vmsize:x} "
                      f"fileoff=0x{fileoff:x} filesize=0x{filesize:x} nsects={nsects}")
                # Section within the segment
                if nsects > 0:
                    sec_off = offset + 72
                    sec_name = data[sec_off:sec_off+16].rstrip(b'\x00').decode()
                    sec_addr = read_le64(data, sec_off + 32)
                    sec_size = read_le64(data, sec_off + 40)
                    sec_foff = read_le32(data, sec_off + 48)  # uint32 for section offset
                    print(f"    section '{sec_name}': addr=0x{sec_addr:x} size=0x{sec_size:x} fileoff=0x{sec_foff:x}")
                return fileoff, filesize
        offset += size
    print("ERROR: __PROJECT segment not found")
    return None, None

def verify_capsule(binary_path):
    print(f"Reading {binary_path} ...")
    with open(binary_path, "rb") as f:
        data = f.read()
    print(f"  Binary size: {len(data):,} bytes")

    fileoff, filesize = find_project_segment(data)
    if fileoff is None:
        return 1

    # The first 4 bytes of the segment are uint32_le: project_size
    seg_data = data[fileoff:fileoff+filesize]
    print(f"\n__PROJECT segment content:")
    print(f"  First 16 bytes (hex): {seg_data[:16].hex()}")

    project_size = read_le32(seg_data, 0)
    print(f"  project_size (LE u32): {project_size}")
    print(f"  compressed data length: {project_size - 4}")

    if project_size < 8 or project_size > filesize:
        print(f"  ERROR: project_size {project_size} is out of range (filesize={filesize})")
        return 1

    compressed = seg_data[4:project_size]
    print(f"  Compressed data: {len(compressed)} bytes")
    print(f"  Compressed data (first 16 hex): {compressed[:16].hex()}")

    # Try to decompress
    print("\nAttempting decompression (raw deflate, wbits=-15) ...")
    try:
        raw = zlib.decompress(compressed, -15)
        print(f"  Decompressed {len(raw)} bytes OK")
    except zlib.error as e:
        print(f"  ERROR: decompression failed: {e}")
        # Try without the trailing 4 bytes
        if len(compressed) >= 4:
            try:
                raw = zlib.decompress(compressed[:-4], -15)
                print(f"  (Retry without trailing 4 bytes: {len(raw)} bytes OK)")
            except zlib.error as e2:
                print(f"  ERROR: retry also failed: {e2}")
                return 1
        else:
            return 1

    # Parse sections
    print("\nParsing capsule sections:")
    pos = 0
    while pos < len(raw):
        if pos + 4 > len(raw):
            print(f"  [truncated at pos={pos}]")
            break
        hdr0 = struct.unpack_from(">I", raw, pos)[0]
        if hdr0 & (1 << 31):
            # extended header
            if pos + 8 > len(raw):
                print(f"  [extended header truncated at pos={pos}]")
                break
            hdr1 = struct.unpack_from(">I", raw, pos+4)[0]
            stype  = ((hdr0 >> 24) & 0x7f) | ((hdr1 & 0xffffff00) >> 1)
            length = (hdr0 & 0xffffff) | ((hdr1 & 0xff) << 24)
            hdr_size = 8
        else:
            stype  = (hdr0 >> 24) & 0x7f
            length = hdr0 & 0xffffff
            hdr_size = 4

        name = SECTION_TYPE_NAMES.get(stype, f"UNKNOWN({stype})")
        padded = (length + 3) & ~3
        print(f"  pos={pos:8d}  type={stype:2d} ({name:25s})  len={length}")

        if stype == kEpilogue:
            print("  → Epilogue reached, done.")
            break
        elif stype == kMainStack:
            if length >= 4:
                magic = raw[pos+hdr_size:pos+hdr_size+4]
                print(f"    stack magic: {magic}")
        elif stype == kStartupScript:
            script = raw[pos+hdr_size:pos+hdr_size+length].rstrip(b'\x00').decode('utf-8', errors='replace')
            print(f"    script: {repr(script)}")
        elif stype == kDigest:
            digest_bytes = raw[pos+hdr_size:pos+hdr_size+16]
            print(f"    digest: {digest_bytes.hex()}")

        pos += hdr_size + padded

    return 0

if __name__ == "__main__":
    path = sys.argv[1] if len(sys.argv) > 1 else None
    if not path:
        import os
        repo = os.path.dirname(os.path.abspath(__file__))
        path = f"{repo}/_build/final/output/HyperXTalkInstaller-1_0_0-Mac.app/Contents/MacOS/Installer"
    sys.exit(verify_capsule(path))
