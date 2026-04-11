#!/usr/bin/env python3
"""
Python replacement for hash_strings.pl.
Reads tokens from lextable.cpp, generates a minimal perfect hash table.
Implements Bob Jenkins' perfect hash algorithm from util/perfect/perfect.c,
operating in INLINE_HM + MINIMAL_HP + SLOW_HS + STRING_HT mode.
The third argument (perfect_cmd path) is accepted but ignored.
"""

import sys
import os
import re

source_file = sys.argv[1]
target_file = sys.argv[2]
# sys.argv[3] would be perfect_cmd, accepted but ignored

# ============================================================
# Bob Jenkins Perfect Hash (Python port of util/perfect/perfect.c)
# Hardcoded mode: INLINE_HM, MINIMAL_HP, SLOW_HS, STRING_HT
# ============================================================

SCRAMBLE_LEN = 1 << 16   # 65536
USE_SCRAMBLE  = 4096
RETRY_INITKEY = 2048
RETRY_PERFECT = 1
M32 = 0xFFFFFFFF


def _log2ceil(val):
    """Return ceiling(log2(val)), i.e., smallest i such that (1<<i) >= val."""
    i = 0
    while (1 << i) < val:
        i += 1
    return i


def _permute(x, nbits):
    """Compute p(x) — a permutation of 0..(1<<nbits)-1. permute(0)=0."""
    mask = (1 << nbits) - 1
    c2 = 1 + nbits // 2
    c3 = 1 + nbits // 3
    c4 = 1 + nbits // 4
    c5 = 1 + nbits // 5
    for _ in range(20):
        x = (x + (x << c2)) & mask
        x = x ^ (x >> c3)
        x = (x + (x << c4)) & mask
        x = x ^ (x >> c5)
    return x


def _make_scramble(smax):
    """Fill scramble[0..SCRAMBLE_LEN-1] with values from permute(i, log2(smax))."""
    nbits = _log2ceil(smax)
    return [_permute(i, nbits) for i in range(SCRAMBLE_LEN)]


def _inline_hash(key_bytes, trysalt):
    """
    Compute the INLINE_HM hash for a key given a trial salt integer.
    initval = trysalt * 0x9e3779b9;
    hash = initval;
    for c in key: hash = (c ^ hash) + ((hash<<26) + (hash>>6));
    """
    h = (trysalt * 0x9e3779b9) & M32
    for c in key_bytes:
        h = ((c ^ h) + (((h << 26) + (h >> 6)) & M32)) & M32
    return h


def _initalen(smax, nkeys):
    """
    Compute initial alen and blen for MINIMAL_HP + SLOW_HS mode.
    Mirrors the switch(mylog2(*smax)) block in perfect.c initalen().
    """
    log_s = _log2ceil(smax)
    if log_s <= 8:
        alen = smax // 2
        blen = smax // 2
    elif log_s <= 17:
        if (smax // 4) < USE_SCRAMBLE:
            # smax/4 < 4096, i.e. smax < 16384
            if nkeys <= smax * 0.52:
                alen = smax // 8
                blen = smax // 8
            else:
                alen = smax // 4
                blen = smax // 4
        else:
            # smax/4 >= 4096
            if nkeys <= smax * (5.0 / 8.0):
                alen = smax // 8
            elif nkeys <= smax * (3.0 / 4.0):
                alen = smax // 4
            else:
                alen = smax // 2
            blen = smax // 4
    elif log_s == 18:
        alen = smax // 8
        blen = smax // 4 if nkeys <= smax * (5.0 / 8.0) else smax // 2
    else:
        # log_s >= 19
        if nkeys <= smax * (5.0 / 8.0):
            alen = smax // 8
            blen = smax // 4
        else:
            alen = smax // 2
            blen = smax // 2

    if alen < 1:
        alen = 1
    if blen < 1:
        blen = 1
    return alen, blen


def _try_initkey(keys_bytes, alen, blen, trysalt):
    """
    Compute (a, b) for all keys with the given salt, alen, blen.
    Returns (tabb_keys, tabb_avals) on success, or (None, None) on duplicate (a,b).

    tabb_keys[b] = list of key indices with b_k == b
    tabb_avals[b] = list of a_k values for keys with b_k == b
    """
    blog  = _log2ceil(blen)
    amask = alen - 1
    shift = 32 - blog

    tabb_keys  = [[] for _ in range(blen)]
    tabb_avals = [[] for _ in range(blen)]
    seen = {}  # (a, b) -> index, for duplicate detection

    for idx, kb in enumerate(keys_bytes):
        h = _inline_hash(kb, trysalt)
        a = (h & amask) if alen > 1 else 0
        b = (h >> shift) if blen > 1 else 0
        pair = (a, b)
        if pair in seen:
            return None, None
        seen[pair] = idx
        tabb_keys[b].append(idx)
        tabb_avals[b].append(a)

    return tabb_keys, tabb_avals


def _apply_path(tv, tk, ta, tabh, qb, qn, qo, qp, scr, tail, rollback):
    """
    Apply (rollback=False) or roll back (rollback=True) the augmenting path
    recorded in the tabq arrays qb/qn/qo/qp[0..tail-1].

    tv   = tabb_val  (modified in place)
    tk   = tabb_keys (read-only list of lists)
    ta   = tabb_avals (read-only list of lists)
    tabh = final-hash -> key-index table (modified in place)
    scr  = scramble array
    Returns True on success, False on collision (non-rollback mode only).
    """
    child = tail - 1
    while child > 0:
        parent = qp[child]
        pb = qb[parent]   # b-index of the parent BFS node

        # 1. Erase old hash slots for pb's keys
        old_s = scr[tv[pb]]
        for ki, a in zip(tk[pb], ta[pb]):
            h = a ^ old_s
            if tabh[h] == ki:
                tabh[h] = -1

        # 2. Change pb's val
        tv[pb] = qo[child] if rollback else qn[child]

        # 3. Re-hash pb's keys with new val
        new_s = scr[tv[pb]]
        for ki, a in zip(tk[pb], ta[pb]):
            h = a ^ new_s
            if rollback:
                if parent == 0:
                    continue  # root never had hashes before augmentation
            else:
                if tabh[h] >= 0:
                    # Rare collision: roll back everything we have done so far
                    _apply_path(tv, tk, ta, tabh, qb, qn, qo, qp, scr, tail, True)
                    return False
            tabh[h] = ki

        child = parent
    return True


def _augment(tv, tk, ta, tw, tabh, key_b, blen, scr, smax, nkeys, item_b, hw):
    """
    BFS augmentation to add item_b into the perfect hash.
    Modifies tv (tabb_val) and tabh on success.
    tw = tabb_water array (modified to track explored b-values).
    hw = unique highwater mark for this call (use b+1 to keep distinct).
    Returns True on success.
    """
    # In SLOW_HS + MINIMAL_HP mode, trans=TRUE so we do full transitive closure.
    # limit: how many values of i to try as the new val for a given b
    limit    = smax if blen < USE_SCRAMBLE else 256   # UB1MAXVAL+1
    highhash = nkeys                                   # MINIMAL_HP: hash in 0..nkeys-1

    max_q = blen + 1
    qb = [None] * max_q   # b-index of node (None = free slot terminal)
    qn = [0]   * max_q    # newval: what to change parent's val to
    qo = [0]   * max_q    # oldval: parent's val before change (for rollback)
    qp = [0]   * max_q    # parent queue index

    qb[0] = item_b
    tail = 1
    q    = 0

    while q < tail:
        myb    = qb[q]
        a_list = ta[myb]

        for i in range(limit):
            si     = scr[i]
            childb = -1    # -1 means "no collision" (free slot)
            ok     = True

            for a in a_list:
                h = a ^ si
                if h >= highhash:
                    ok = False
                    break
                ck = tabh[h]
                if ck >= 0:                      # slot occupied by key ck
                    hitb = key_b[ck]
                    if childb >= 0:
                        if childb != hitb:       # hit two different child b's
                            ok = False
                            break
                    else:
                        childb = hitb
                        if tw[childb] == hw:     # already in BFS tree
                            ok = False
                            break

            if not ok:
                continue

            # This value of i is valid — add to BFS queue
            if childb >= 0:
                tw[childb] = hw   # mark explored

            qb[tail] = childb    # None (-1 used internally, stored as is)
            qn[tail] = i
            qo[tail] = tv[myb]
            qp[tail] = q
            tail += 1

            if childb < 0:
                # Found a free slot — try to apply the augmenting path
                if _apply_path(tv, tk, ta, tabh, qb, qn, qo, qp, scr, tail, False):
                    return True
                tail -= 1   # path application failed, retract

        q += 1

    return False   # no augmenting path found


def _try_perfect(tabb_keys, tabb_avals, blen, smax, scr, nkeys):
    """
    Given keys grouped by b, attempt to build a minimal perfect hash.
    Returns (tabb_val, tabh) on success, None on failure.

    tabb_val[b] = chosen val index (into scramble) for slot b
    tabh[h]     = key index whose hash is h  (for h in 0..nkeys-1)
    """
    tv   = [0] * blen    # tabb_val
    tw   = [0] * blen    # tabb_water (all zero = unvisited)
    tabh = [-1] * nkeys  # final hash -> key index

    # Reverse mapping: key index -> its b value
    key_b = [0] * nkeys
    for b in range(blen):
        for ki in tabb_keys[b]:
            key_b[ki] = b

    # Process b values in descending order of list length (most-constrained first)
    maxkeys = max((len(tabb_keys[b]) for b in range(blen)), default=0)

    for j in range(maxkeys, 0, -1):
        for b in range(blen):
            if len(tabb_keys[b]) == j:
                if not _augment(tv, tabb_keys, tabb_avals, tw, tabh, key_b,
                                blen, scr, smax, nkeys, b, b + 1):
                    return None

    return tv, tabh


def find_perfect_hash(keywords):
    """
    Main driver.  Given a list of keyword strings, find a minimal perfect hash.
    Returns (trysalt, alen, blen, smax, scramble, tabb_val, tabh).
    tabh[h] = index into keywords for the keyword at final hash position h.
    """
    nkeys = len(keywords)

    if nkeys == 0:
        return 1, 1, 0, 1, [0] * SCRAMBLE_LEN, [], []

    keys_bytes = [kw.encode('ascii') for kw in keywords]

    # Initial values
    smax = 1 << _log2ceil(nkeys)
    alen, blen = _initalen(smax, nkeys)
    maxalen = smax // 2    # MINIMAL_HP: alen never exceeds smax/2

    scramble = _make_scramble(smax)

    bad_initkey = 0
    bad_perfect = 0
    trysalt = 1

    while True:
        tabb_keys, tabb_avals = _try_initkey(keys_bytes, alen, blen, trysalt)

        if tabb_keys is None:
            # Duplicate (a,b) pair — this salt doesn't give distinct pairs
            bad_initkey += 1
            if bad_initkey >= RETRY_INITKEY:
                if alen < maxalen:
                    alen *= 2
                elif blen < smax:
                    blen *= 2
                else:
                    raise RuntimeError(
                        "Cannot find distinct (A,B) pairs — possible duplicate keys")
                bad_initkey = 0
                bad_perfect = 0
            trysalt += 1
            continue

        result = _try_perfect(tabb_keys, tabb_avals, blen, smax, scramble, nkeys)

        if result is None:
            # Failed to build perfect hash for this salt
            bad_perfect += 1
            if bad_perfect >= RETRY_PERFECT:
                if blen < smax:
                    blen *= 2       # expand and retry the SAME salt
                    bad_perfect = 0
                    continue        # do NOT increment trysalt
                else:
                    raise RuntimeError("Cannot build perfect hash table")
            trysalt += 1
            bad_perfect = 0
            continue

        tabb_val, tabh = result
        return trysalt, alen, blen, smax, scramble, tabb_val, tabh


def generate_output(trysalt, alen, blen, smax, scramble, tabb_val, tabh, keywords):
    """
    Generate the hashedstrings.cpp content in the exact format produced by
    perfect.c's make_h() + make_c() functions.
    """
    nkeys   = len(keywords)
    blog    = _log2ceil(blen) if blen > 1 else 0
    amask   = alen - 1
    shift   = 32 - blog
    salt_out = (trysalt * 0x9e3779b9) & M32
    largest  = max((len(kw) for kw in keywords), default=0)

    lines = []

    # ---- make_h equivalent ----
    lines.append(f'#define SCRIPT_KEYWORD_SALT 0x{salt_out:08x}\n')
    lines.append(f'#define SCRIPT_KEYWORD_COUNT {nkeys}\n')
    lines.append(f'#define SCRIPT_KEYWORD_LARGEST {largest}\n')
    lines.append('\n')

    # ---- make_c equivalent ----

    # Hash table
    if blen > 0:
        # Choose element type
        if smax <= 255 or blen >= USE_SCRAMBLE:
            ttype = 'uint1'
        else:
            ttype = 'uint2'

        lines.append(f'{ttype} s_script_keyword_hash_table[] = {{\n')

        if blen >= USE_SCRAMBLE:
            # Output raw val_b values (NOT mapped through scramble)
            vals = [tabb_val[i] for i in range(blen)]
        else:
            # Output scramble[val_b] values
            vals = [scramble[tabb_val[i]] for i in range(blen)]

        if blen < 16:
            lines.append(','.join(f'{v:3d}' for v in vals) + ',\n')
        elif blen <= 1024:
            for i in range(0, blen, 16):
                chunk = vals[i:i+16]
                lines.append(','.join(str(v) for v in chunk) + ',\n')
        elif blen < USE_SCRAMBLE:
            for i in range(0, blen, 8):
                chunk = vals[i:i+8]
                lines.append(','.join(str(v) for v in chunk) + ',\n')
        else:
            # blen >= USE_SCRAMBLE: 16 per line of raw val_b
            for i in range(0, blen, 16):
                chunk = vals[i:i+16]
                lines.append(','.join(str(v) for v in chunk) + ',\n')

        lines.append('};\n')
        lines.append('\n')

    # Hash function
    lines.append('inline uint4 script_keyword_hash(uint4 val)\n{\n')
    if blen == 0 or nkeys <= 1:
        lines.append('  uint4 rsl = 0;\n')
    elif blen < USE_SCRAMBLE:
        lines.append(
            f'  uint4 rsl = ((val & 0x{amask:x}) ^ '
            f's_script_keyword_hash_table[val >> {shift}]);\n')
    else:
        lines.append(
            f'  uint4 rsl = ((val & 0x{amask:x}) ^ '
            f's_script_keyword_scramble_table['
            f's_script_keyword_hash_table[val >> {shift}]]);\n')
    lines.append('  return rsl;\n')
    lines.append('}\n')
    lines.append('\n')

    # Keywords array (ordered by final hash position)
    lines.append('static const char *s_script_keywords[] =\n{\n')
    for i in range(nkeys):
        ki = tabh[i]
        lines.append(f'  "{keywords[ki]}",\n')
    lines.append('};\n')

    return ''.join(lines)


# ============================================================
# Main: extract tokens from lextable.cpp, compute perfect hash
# ============================================================

with open(source_file, 'r') as f:
    source_lines = f.readlines()

# Extract tokens: lines of the form  { "string", ... }
tokens = {}
for line in source_lines:
    stripped = line.lstrip()
    if not stripped.startswith('{'):
        continue
    rest = stripped[1:].lstrip()
    if not rest.startswith('"'):
        continue
    end = rest.index('"', 1) if '"' in rest[1:] else -1
    if end == -1:
        continue
    if rest[1] == '\\':
        continue
    token = rest[1:end]
    tokens[token] = 1

keywords = sorted(tokens.keys())

trysalt, alen, blen, smax, scramble, tabb_val, tabh = find_perfect_hash(keywords)

output = generate_output(trysalt, alen, blen, smax, scramble, tabb_val, tabh, keywords)

os.makedirs(os.path.dirname(os.path.abspath(target_file)), exist_ok=True)
with open(target_file, 'w') as f:
    f.write(output)
