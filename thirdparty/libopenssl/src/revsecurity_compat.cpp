// revsecurity_compat.cpp
// OpenSSL 1.x -> OpenSSL 3.x backward-compatibility shims.
//
// In OpenSSL 3, the following functions were converted to macros that
// redirect to new "getter"-style names:
//   EVP_CIPHER_key_length     -> EVP_CIPHER_get_key_length
//   EVP_CIPHER_CTX_key_length -> EVP_CIPHER_CTX_get_key_length
//   EVP_CIPHER_CTX_block_size -> EVP_CIPHER_CTX_get_block_size
//   SSL_get_peer_certificate  -> SSL_get1_peer_certificate
//
// Because they are macros (not symbols) in OpenSSL 3, they cannot be
// re-exported by name from revsecurity.dll via the .def file.
// This file provides real function bodies for the old names so that the
// linker can satisfy the .def exports.

// Include headers to pull in type definitions.
#include <openssl/evp.h>
#include <openssl/ssl.h>
#include <openssl/x509.h>

// Now remove the compat macros so we can define real functions.
#ifdef EVP_CIPHER_key_length
# undef EVP_CIPHER_key_length
#endif
#ifdef EVP_CIPHER_CTX_key_length
# undef EVP_CIPHER_CTX_key_length
#endif
#ifdef EVP_CIPHER_CTX_block_size
# undef EVP_CIPHER_CTX_block_size
#endif
#ifdef SSL_get_peer_certificate
# undef SSL_get_peer_certificate
#endif

extern "C" {

int EVP_CIPHER_key_length(const EVP_CIPHER *e)
{
    return EVP_CIPHER_get_key_length(e);
}

int EVP_CIPHER_CTX_key_length(const EVP_CIPHER_CTX *c)
{
    return EVP_CIPHER_CTX_get_key_length(c);
}

int EVP_CIPHER_CTX_block_size(const EVP_CIPHER_CTX *c)
{
    return (int)EVP_CIPHER_CTX_get_block_size(c);
}

X509 *SSL_get_peer_certificate(const SSL *s)
{
    return SSL_get1_peer_certificate(s);
}

} // extern "C"
