#include <stdlib.h>
#include <stdio.h>
#include <cstring>

#define SYMBOL_PREFIX

typedef void *module_t;
typedef void *handler_t;

#ifdef _DEBUG
#include <stdint.h>
extern void __MCLog(const char *file, uint32_t line, const char *format, ...);
#define MCLog(...) __MCLog(__FILE__, __LINE__, __VA_ARGS__)
#else
#define MCLog(...) (void) (__VA_ARGS__)
#endif
extern "C" void *MCSupportLibraryLoad(const char *);
extern "C" void MCSupportLibraryUnload(void *);
extern "C" void *MCSupportLibraryLookupSymbol(void *, const char *);

extern "C"
{

static int module_load(const char *p_source, module_t *r_module)
{
  module_t t_module;
 	t_module = (module_t)MCSupportLibraryLoad(p_source);
  if (t_module == NULL)
    return 0;
  *r_module = t_module;
  return 1;
}

static int module_unload(module_t p_module)
{
  MCSupportLibraryUnload(p_module);
  return 1;
}

static int module_resolve(module_t p_module, const char *p_name, handler_t *r_handler)
{
  handler_t t_handler;
    t_handler = MCSupportLibraryLookupSymbol(p_module, p_name);
  if (t_handler == NULL)
    return 0;
  *r_handler = t_handler;
  return 1;
}


#if defined(_LINUX)
static void failed_required_link(const char* libname, const char* liblist)
{
  const char* dialog =
    "zenity --error --title \"$TITLE\" --text \"$TEXT\" 2>/dev/null 1>/dev/null && "
    "echo \"wm state . withdrawn ; tk_messageBox -icon error -message \\\"$TEXT\\\" -title \\\"$TITLE\\\" -type ok ; exit \" | wish && "
    "xmessage -center -buttons OK -default OK \"$TITLE:\" \"$TEXT\"" 
	;

  char* error = new char[65536];
  char* command = new char[65536];

  snprintf(error, 65536, "Failed to load library \'%s\' (tried %s)", libname, liblist);
  snprintf(command, 65536, "TITLE=\"LiveCode startup error\" TEXT=\"%s\" /bin/sh -c \'%s\' &", error, dialog);
  MCLog( "Fatal: failed to load library \'%s\' (tried %s)\n", libname, liblist);
  int ignored = system(command); (void)ignored;
  exit(-1);
}
#endif

typedef void (*OPENSSL_config_t)(void *pArg0);
OPENSSL_config_t OPENSSL_config_ptr = NULL;
typedef int (*OPENSSL_init_crypto_t)(long long int pArg0, void *pArg1);
OPENSSL_init_crypto_t OPENSSL_init_crypto_ptr = NULL;
typedef void *(*CRYPTO_malloc_t)(int pArg0);
CRYPTO_malloc_t CRYPTO_malloc_ptr = NULL;
typedef void (*CRYPTO_free_t)(void *pArg0);
CRYPTO_free_t CRYPTO_free_ptr = NULL;
typedef int (*EVP_CipherInit_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3, int pArg4);
EVP_CipherInit_t EVP_CipherInit_ptr = NULL;
typedef int (*EVP_CipherUpdate_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3, int pArg4);
EVP_CipherUpdate_t EVP_CipherUpdate_ptr = NULL;
typedef int (*EVP_CipherFinal_t)(void *pArg0, void *pArg1, void *pArg2);
EVP_CipherFinal_t EVP_CipherFinal_ptr = NULL;
typedef int (*EVP_CIPHER_CTX_set_key_length_t)(void *pArg0, int pArg1);
EVP_CIPHER_CTX_set_key_length_t EVP_CIPHER_CTX_set_key_length_ptr = NULL;
typedef int (*EVP_BytesToKey_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3, int pArg4, int pArg5, void *pArg6, void *pArg7);
EVP_BytesToKey_t EVP_BytesToKey_ptr = NULL;
typedef void *(*EVP_get_cipherbyname_t)(void *pArg0);
EVP_get_cipherbyname_t EVP_get_cipherbyname_ptr = NULL;
typedef void *(*EVP_md5_t)(void);
EVP_md5_t EVP_md5_ptr = NULL;
typedef void (*EVP_PKEY_free_t)(void *pArg0);
EVP_PKEY_free_t EVP_PKEY_free_ptr = NULL;
typedef void *(*EVP_PKEY_get1_RSA_t)(void *pArg0);
EVP_PKEY_get1_RSA_t EVP_PKEY_get1_RSA_ptr = NULL;
typedef void *(*EVP_rc4_t)(void);
EVP_rc4_t EVP_rc4_ptr = NULL;
typedef void *(*EVP_sha1_t)(void);
EVP_sha1_t EVP_sha1_ptr = NULL;
typedef int (*EVP_add_digest_t)(void *pArg0);
EVP_add_digest_t EVP_add_digest_ptr = NULL;
typedef int (*EVP_DigestInit_t)(void *pArg0, void *pArg1);
EVP_DigestInit_t EVP_DigestInit_ptr = NULL;
typedef int (*EVP_DigestUpdate_t)(void *pArg0, void *pArg1, int pArg2);
EVP_DigestUpdate_t EVP_DigestUpdate_ptr = NULL;
typedef int (*EVP_DigestFinal_t)(void *pArg0, void *pArg1, void *pArg2);
EVP_DigestFinal_t EVP_DigestFinal_ptr = NULL;
typedef int (*EVP_DecryptInit_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3);
EVP_DecryptInit_t EVP_DecryptInit_ptr = NULL;
typedef int (*EVP_DecryptUpdate_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3, int pArg4);
EVP_DecryptUpdate_t EVP_DecryptUpdate_ptr = NULL;
typedef int (*EVP_DecryptFinal_t)(void *pArg0, void *pArg1, void *pArg2);
EVP_DecryptFinal_t EVP_DecryptFinal_ptr = NULL;
typedef void *(*EVP_PKEY_new_t)(void);
EVP_PKEY_new_t EVP_PKEY_new_ptr = NULL;
typedef void *(*EVP_PKEY_assign_t)(void *pArg0, int pArg1, void *pArg2);
EVP_PKEY_assign_t EVP_PKEY_assign_ptr = NULL;
typedef int (*EVP_CIPHER_key_length_t)(void *pArg0);
EVP_CIPHER_key_length_t EVP_CIPHER_key_length_ptr = NULL;
typedef int (*EVP_CIPHER_get_key_length_t)(void *pArg0);
EVP_CIPHER_get_key_length_t EVP_CIPHER_get_key_length_ptr = NULL;
typedef void *(*EVP_CIPHER_CTX_new_t)(void);
EVP_CIPHER_CTX_new_t EVP_CIPHER_CTX_new_ptr = NULL;
typedef void (*EVP_CIPHER_CTX_free_t)(void *pArg0);
EVP_CIPHER_CTX_free_t EVP_CIPHER_CTX_free_ptr = NULL;
typedef int (*EVP_CIPHER_CTX_key_length_t)(void *pArg0);
EVP_CIPHER_CTX_key_length_t EVP_CIPHER_CTX_key_length_ptr = NULL;
typedef int (*EVP_CIPHER_CTX_get_key_length_t)(void *pArg0);
EVP_CIPHER_CTX_get_key_length_t EVP_CIPHER_CTX_get_key_length_ptr = NULL;
typedef int (*EVP_CIPHER_CTX_block_size_t)(void *pArg0);
EVP_CIPHER_CTX_block_size_t EVP_CIPHER_CTX_block_size_ptr = NULL;
typedef int (*EVP_CIPHER_CTX_get_block_size_t)(void *pArg0);
EVP_CIPHER_CTX_get_block_size_t EVP_CIPHER_CTX_get_block_size_ptr = NULL;
typedef void (*EVP_CIPHER_CTX_reset_t)(void *pArg0);
EVP_CIPHER_CTX_reset_t EVP_CIPHER_CTX_reset_ptr = NULL;
typedef void *(*EVP_MD_CTX_new_t)(void);
EVP_MD_CTX_new_t EVP_MD_CTX_new_ptr = NULL;
typedef void (*EVP_MD_CTX_free_t)(void *pArg0);
EVP_MD_CTX_free_t EVP_MD_CTX_free_ptr = NULL;
typedef void *(*BIO_f_md_t)(void);
BIO_f_md_t BIO_f_md_ptr = NULL;
typedef void *(*BIO_f_base64_t)(void);
BIO_f_base64_t BIO_f_base64_ptr = NULL;
typedef void *(*ERR_error_string_t)(int pArg0, void *pArg1);
ERR_error_string_t ERR_error_string_ptr = NULL;
typedef void (*ERR_error_string_n_t)(int pArg0, void *pArg1, int pArg2);
ERR_error_string_n_t ERR_error_string_n_ptr = NULL;
typedef int (*ERR_get_error_t)(void);
ERR_get_error_t ERR_get_error_ptr = NULL;
typedef int (*ERR_get_error_line_data_t)(void *pArg0, void *pArg1);
ERR_get_error_line_data_t ERR_get_error_line_data_ptr = NULL;
typedef void (*ERR_print_errors_fp_t)(void *pArg0);
ERR_print_errors_fp_t ERR_print_errors_fp_ptr = NULL;
typedef void *(*ERR_reason_error_string_t)(int pArg0);
ERR_reason_error_string_t ERR_reason_error_string_ptr = NULL;
typedef void (*ERR_remove_state_t)(int pArg0);
ERR_remove_state_t ERR_remove_state_ptr = NULL;
typedef void (*RAND_seed_t)(void *pArg0, int pArg1);
RAND_seed_t RAND_seed_ptr = NULL;
typedef int (*RAND_bytes_t)(void *pArg0, int pArg1);
RAND_bytes_t RAND_bytes_ptr = NULL;
typedef void *(*X509_EXTENSION_get_object_t)(void *pArg0);
X509_EXTENSION_get_object_t X509_EXTENSION_get_object_ptr = NULL;
typedef void *(*X509_NAME_oneline_t)(void *pArg0, void *pArg1, int pArg2);
X509_NAME_oneline_t X509_NAME_oneline_ptr = NULL;
typedef int (*X509_NAME_get_text_by_NID_t)(void *pArg0, int pArg1, void *pArg2, int pArg3);
X509_NAME_get_text_by_NID_t X509_NAME_get_text_by_NID_ptr = NULL;
typedef void *(*X509_verify_cert_error_string_t)(int pArg0);
X509_verify_cert_error_string_t X509_verify_cert_error_string_ptr = NULL;
typedef void *(*X509_get_issuer_name_t)(void *pArg0);
X509_get_issuer_name_t X509_get_issuer_name_ptr = NULL;
typedef void *(*X509_get_subject_name_t)(void *pArg0);
X509_get_subject_name_t X509_get_subject_name_ptr = NULL;
typedef int (*X509_get_ext_count_t)(void *pArg0);
X509_get_ext_count_t X509_get_ext_count_ptr = NULL;
typedef void *(*X509_get_ext_d2i_t)(void *pArg0, int pArg1, void *pArg2, void *pArg3);
X509_get_ext_d2i_t X509_get_ext_d2i_ptr = NULL;
typedef void *(*X509_get_pubkey_t)(void *pArg0);
X509_get_pubkey_t X509_get_pubkey_ptr = NULL;
typedef void *(*X509_get_ext_t)(void *pArg0, int pArg1);
X509_get_ext_t X509_get_ext_ptr = NULL;
typedef int (*X509_check_private_key_t)(void *pArg0, void *pArg1);
X509_check_private_key_t X509_check_private_key_ptr = NULL;
typedef void (*X509_free_t)(void *pArg0);
X509_free_t X509_free_ptr = NULL;
typedef void (*X509_CRL_free_t)(void *pArg0);
X509_CRL_free_t X509_CRL_free_ptr = NULL;
typedef void *(*d2i_X509_t)(void *pArg0, void *pArg1, int pArg2);
d2i_X509_t d2i_X509_ptr = NULL;
typedef int (*i2d_X509_t)(void *pArg0, void *pArg1);
i2d_X509_t i2d_X509_ptr = NULL;
typedef void *(*d2i_X509_bio_t)(void *pArg0, void *pArg1);
d2i_X509_bio_t d2i_X509_bio_ptr = NULL;
typedef void *(*d2i_X509_CRL_t)(void *pArg0, void *pArg1, int pArg2);
d2i_X509_CRL_t d2i_X509_CRL_ptr = NULL;
typedef void *(*d2i_PUBKEY_bio_t)(void *pArg0, void *pArg1);
d2i_PUBKEY_bio_t d2i_PUBKEY_bio_ptr = NULL;
typedef void *(*d2i_PrivateKey_bio_t)(void *pArg0, void *pArg1);
d2i_PrivateKey_bio_t d2i_PrivateKey_bio_ptr = NULL;
typedef int (*X509_STORE_add_cert_t)(void *pArg0, void *pArg1);
X509_STORE_add_cert_t X509_STORE_add_cert_ptr = NULL;
typedef int (*X509_STORE_add_crl_t)(void *pArg0, void *pArg1);
X509_STORE_add_crl_t X509_STORE_add_crl_ptr = NULL;
typedef int (*X509_STORE_CTX_get_error_t)(void *pArg0);
X509_STORE_CTX_get_error_t X509_STORE_CTX_get_error_ptr = NULL;
typedef int (*X509_STORE_CTX_get_error_depth_t)(void *pArg0);
X509_STORE_CTX_get_error_depth_t X509_STORE_CTX_get_error_depth_ptr = NULL;
typedef void *(*X509_STORE_CTX_get_current_cert_t)(void *pArg0);
X509_STORE_CTX_get_current_cert_t X509_STORE_CTX_get_current_cert_ptr = NULL;
typedef int (*X509_STORE_load_locations_t)(void *pArg0, void *pArg1, void *pArg2);
X509_STORE_load_locations_t X509_STORE_load_locations_ptr = NULL;
typedef int (*X509_STORE_set_flags_t)(void *pArg0, int pArg1);
X509_STORE_set_flags_t X509_STORE_set_flags_ptr = NULL;
typedef void *(*X509V3_EXT_get_t)(void *pArg0);
X509V3_EXT_get_t X509V3_EXT_get_ptr = NULL;
typedef void (*GENERAL_NAMES_free_t)(void *pArg0);
GENERAL_NAMES_free_t GENERAL_NAMES_free_ptr = NULL;
typedef void *(*PEM_read_bio_X509_AUX_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3);
PEM_read_bio_X509_AUX_t PEM_read_bio_X509_AUX_ptr = NULL;
typedef void *(*PEM_read_bio_PUBKEY_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3);
PEM_read_bio_PUBKEY_t PEM_read_bio_PUBKEY_ptr = NULL;
typedef void *(*PEM_read_bio_RSAPublicKey_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3);
PEM_read_bio_RSAPublicKey_t PEM_read_bio_RSAPublicKey_ptr = NULL;
typedef void *(*PEM_read_bio_PrivateKey_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3);
PEM_read_bio_PrivateKey_t PEM_read_bio_PrivateKey_ptr = NULL;
typedef int (*OBJ_obj2nid_t)(void *pArg0);
OBJ_obj2nid_t OBJ_obj2nid_ptr = NULL;
typedef int (*OBJ_nid2sn_t)(void *pArg0);
OBJ_nid2sn_t OBJ_nid2sn_ptr = NULL;
typedef void *(*OBJ_nid2obj_t)(int pArg0);
OBJ_nid2obj_t OBJ_nid2obj_ptr = NULL;
typedef void *(*OBJ_txt2obj_t)(void *pArg0, int pArg1);
OBJ_txt2obj_t OBJ_txt2obj_ptr = NULL;
typedef int (*OBJ_txt2nid_t)(void *pArg0);
OBJ_txt2nid_t OBJ_txt2nid_ptr = NULL;
typedef int (*OBJ_create_t)(void *pArg0, void *pArg1, void *pArg2);
OBJ_create_t OBJ_create_ptr = NULL;
typedef void (*OBJ_NAME_do_all_sorted_t)(int pArg0, void *pArg1, void *pArg2);
OBJ_NAME_do_all_sorted_t OBJ_NAME_do_all_sorted_ptr = NULL;
typedef void *(*RSA_new_t)(void);
RSA_new_t RSA_new_ptr = NULL;
typedef void (*RSA_free_t)(void *pArg0);
RSA_free_t RSA_free_ptr = NULL;
typedef int (*RSA_private_decrypt_t)(int pArg0, void *pArg1, void *pArg2, void *pArg3, int pArg4);
RSA_private_decrypt_t RSA_private_decrypt_ptr = NULL;
typedef int (*RSA_public_encrypt_t)(int pArg0, void *pArg1, void *pArg2, void *pArg3, int pArg4);
RSA_public_encrypt_t RSA_public_encrypt_ptr = NULL;
typedef int (*RSA_private_encrypt_t)(int pArg0, void *pArg1, void *pArg2, void *pArg3, int pArg4);
RSA_private_encrypt_t RSA_private_encrypt_ptr = NULL;
typedef int (*RSA_public_decrypt_t)(int pArg0, void *pArg1, void *pArg2, void *pArg3, int pArg4);
RSA_public_decrypt_t RSA_public_decrypt_ptr = NULL;
typedef int (*RSA_size_t)(void *pArg0);
RSA_size_t RSA_size_ptr = NULL;
typedef int (*RSA_set0_crt_params_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3);
RSA_set0_crt_params_t RSA_set0_crt_params_ptr = NULL;
typedef int (*RSA_set0_factors_t)(void *pArg0, void *pArg1, void *pArg2);
RSA_set0_factors_t RSA_set0_factors_ptr = NULL;
typedef int (*RSA_set0_key_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3);
RSA_set0_key_t RSA_set0_key_ptr = NULL;
typedef void *(*PKCS7_dataInit_t)(void *pArg0, void *pArg1);
PKCS7_dataInit_t PKCS7_dataInit_ptr = NULL;
typedef int (*PKCS7_dataFinal_t)(void *pArg0, void *pArg1);
PKCS7_dataFinal_t PKCS7_dataFinal_ptr = NULL;
typedef int (*PKCS7_content_new_t)(void *pArg0, int pArg1);
PKCS7_content_new_t PKCS7_content_new_ptr = NULL;
typedef int (*PKCS7_add_certificate_t)(void *pArg0, void *pArg1);
PKCS7_add_certificate_t PKCS7_add_certificate_ptr = NULL;
typedef int (*PKCS7_add_attribute_t)(void *pArg0, int pArg1, int pArg2, void *pArg3);
PKCS7_add_attribute_t PKCS7_add_attribute_ptr = NULL;
typedef int (*PKCS7_add_signed_attribute_t)(void *pArg0, int pArg1, int pArg2, void *pArg3);
PKCS7_add_signed_attribute_t PKCS7_add_signed_attribute_ptr = NULL;
typedef void *(*PKCS7_add_signature_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3);
PKCS7_add_signature_t PKCS7_add_signature_ptr = NULL;
typedef void *(*PKCS7_set_type_t)(void *pArg0, int pArg1);
PKCS7_set_type_t PKCS7_set_type_ptr = NULL;
typedef void *(*PKCS7_new_t)(void);
PKCS7_new_t PKCS7_new_ptr = NULL;
typedef void (*PKCS7_free_t)(void *pArg0);
PKCS7_free_t PKCS7_free_ptr = NULL;
typedef int (*i2d_PKCS7_t)(void *pArg0, void *pArg1);
i2d_PKCS7_t i2d_PKCS7_ptr = NULL;
typedef void *(*d2i_PKCS7_t)(void *pArg0, void *pArg1, int pArg2);
d2i_PKCS7_t d2i_PKCS7_ptr = NULL;
typedef void *(*d2i_PKCS7_bio_t)(void *pArg0, void *pArg1);
d2i_PKCS7_bio_t d2i_PKCS7_bio_ptr = NULL;
typedef int (*i2d_PKCS7_SIGNER_INFO_t)(void *pArg0, void *pArg1);
i2d_PKCS7_SIGNER_INFO_t i2d_PKCS7_SIGNER_INFO_ptr = NULL;
typedef int (*OPENSSL_sk_num_t)(void *pArg0);
OPENSSL_sk_num_t OPENSSL_sk_num_ptr = NULL;
typedef void *(*OPENSSL_sk_value_t)(void *pArg0, int pArg1);
OPENSSL_sk_value_t OPENSSL_sk_value_ptr = NULL;
typedef void *(*OPENSSL_sk_new_t)(void *pArg0);
OPENSSL_sk_new_t OPENSSL_sk_new_ptr = NULL;
typedef void (*OPENSSL_sk_free_t)(void *pArg0);
OPENSSL_sk_free_t OPENSSL_sk_free_ptr = NULL;
typedef int (*OPENSSL_sk_push_t)(void *pArg0, void *pArg1);
OPENSSL_sk_push_t OPENSSL_sk_push_ptr = NULL;
typedef void *(*OPENSSL_sk_pop_t)(void *pArg0);
OPENSSL_sk_pop_t OPENSSL_sk_pop_ptr = NULL;
typedef void *(*BIO_new_file_t)(void *pArg0, void *pArg1);
BIO_new_file_t BIO_new_file_ptr = NULL;
typedef int (*BIO_read_t)(void *pArg0, void *pArg1, int pArg2);
BIO_read_t BIO_read_ptr = NULL;
typedef int (*BIO_write_t)(void *pArg0, void *pArg1, int pArg2);
BIO_write_t BIO_write_ptr = NULL;
typedef void *(*BIO_push_t)(void *pArg0, void *pArg1);
BIO_push_t BIO_push_ptr = NULL;
typedef void *(*BIO_new_t)(void *pArg0);
BIO_new_t BIO_new_ptr = NULL;
typedef int (*BIO_gets_t)(void *pArg0, void *pArg1, int pArg2);
BIO_gets_t BIO_gets_ptr = NULL;
typedef int (*BIO_free_t)(void *pArg0);
BIO_free_t BIO_free_ptr = NULL;
typedef void *(*BIO_new_mem_buf_t)(void *pArg0, int pArg1);
BIO_new_mem_buf_t BIO_new_mem_buf_ptr = NULL;
typedef int (*BIO_ctrl_t)(void *pArg0, int pArg1, int pArg2, void *pArg3);
BIO_ctrl_t BIO_ctrl_ptr = NULL;
typedef int (*BIO_free_all_t)(void *pArg0);
BIO_free_all_t BIO_free_all_ptr = NULL;
typedef void *(*ASN1_item_d2i_t)(void *pArg0, void *pArg1, int pArg2, void *pArg3);
ASN1_item_d2i_t ASN1_item_d2i_ptr = NULL;
typedef int (*ASN1_item_i2d_t)(void *pArg0, void *pArg1, void *pArg2);
ASN1_item_i2d_t ASN1_item_i2d_ptr = NULL;
typedef void *(*ASN1_item_new_t)(void *pArg0);
ASN1_item_new_t ASN1_item_new_ptr = NULL;
typedef void (*ASN1_item_free_t)(void *pArg0, void *pArg1);
ASN1_item_free_t ASN1_item_free_ptr = NULL;
typedef int (*ASN1_mbstring_copy_t)(void *pArg0, void *pArg1, int pArg2, int pArg3, int pArg4);
ASN1_mbstring_copy_t ASN1_mbstring_copy_ptr = NULL;
typedef void *(*ASN1_STRING_new_t)(void);
ASN1_STRING_new_t ASN1_STRING_new_ptr = NULL;
typedef void *(*ASN1_STRING_data_t)(void *pArg0);
ASN1_STRING_data_t ASN1_STRING_data_ptr = NULL;
typedef int (*ASN1_STRING_set_t)(void *pArg0, void *pArg1, int pArg2);
ASN1_STRING_set_t ASN1_STRING_set_ptr = NULL;
typedef void (*ASN1_STRING_free_t)(void *pArg0);
ASN1_STRING_free_t ASN1_STRING_free_ptr = NULL;
typedef void *(*ASN1_STRING_get0_data_t)(void *pArg0);
ASN1_STRING_get0_data_t ASN1_STRING_get0_data_ptr = NULL;
typedef void *(*ASN1_OCTET_STRING_new_t)(void);
ASN1_OCTET_STRING_new_t ASN1_OCTET_STRING_new_ptr = NULL;
typedef int (*ASN1_OCTET_STRING_set_t)(void *pArg0, void *pArg1, int pArg2);
ASN1_OCTET_STRING_set_t ASN1_OCTET_STRING_set_ptr = NULL;
typedef void *(*ASN1_BIT_STRING_new_t)(void);
ASN1_BIT_STRING_new_t ASN1_BIT_STRING_new_ptr = NULL;
typedef int (*ASN1_BIT_STRING_set_bit_t)(void *pArg0, int pArg1, int pArg2);
ASN1_BIT_STRING_set_bit_t ASN1_BIT_STRING_set_bit_ptr = NULL;
typedef void *(*ASN1_TYPE_new_t)(void);
ASN1_TYPE_new_t ASN1_TYPE_new_ptr = NULL;
typedef void (*ASN1_TYPE_free_t)(void *pArg0);
ASN1_TYPE_free_t ASN1_TYPE_free_ptr = NULL;
typedef void *(*ASN1_NULL_new_t)(void);
ASN1_NULL_new_t ASN1_NULL_new_ptr = NULL;
typedef void *(*ASN1_BIT_STRING_it_t)(void);
ASN1_BIT_STRING_it_t ASN1_BIT_STRING_it_ptr = NULL;
typedef void *(*ASN1_IA5STRING_it_t)(void);
ASN1_IA5STRING_it_t ASN1_IA5STRING_it_ptr = NULL;
typedef void *(*ASN1_BMPSTRING_it_t)(void);
ASN1_BMPSTRING_it_t ASN1_BMPSTRING_it_ptr = NULL;
typedef void *(*ASN1_OCTET_STRING_it_t)(void);
ASN1_OCTET_STRING_it_t ASN1_OCTET_STRING_it_ptr = NULL;
typedef void *(*ASN1_ANY_it_t)(void);
ASN1_ANY_it_t ASN1_ANY_it_ptr = NULL;
typedef void *(*ASN1_OBJECT_it_t)(void);
ASN1_OBJECT_it_t ASN1_OBJECT_it_ptr = NULL;
typedef void *(*ASN1_NULL_it_t)(void);
ASN1_NULL_it_t ASN1_NULL_it_ptr = NULL;
typedef void *(*BN_new_t)(void);
BN_new_t BN_new_ptr = NULL;
typedef void (*BN_free_t)(void *pArg0);
BN_free_t BN_free_ptr = NULL;
typedef int (*BN_set_word_t)(void *pArg0, int pArg1);
BN_set_word_t BN_set_word_ptr = NULL;
typedef void *(*BN_bin2bn_t)(void *pArg0, int pArg1, void *pArg2);
BN_bin2bn_t BN_bin2bn_ptr = NULL;
typedef void (*DH_free_t)(void *pArg0);
DH_free_t DH_free_ptr = NULL;
typedef void *(*DH_new_t)(void);
DH_new_t DH_new_ptr = NULL;
typedef int (*DH_set0_pqg_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3);
DH_set0_pqg_t DH_set0_pqg_ptr = NULL;
typedef void *(*ENGINE_by_id_t)(void *pArg0);
ENGINE_by_id_t ENGINE_by_id_ptr = NULL;
typedef int (*ENGINE_finish_t)(void *pArg0);
ENGINE_finish_t ENGINE_finish_ptr = NULL;
typedef int (*ENGINE_free_t)(void *pArg0);
ENGINE_free_t ENGINE_free_ptr = NULL;
typedef int (*ENGINE_init_t)(void *pArg0);
ENGINE_init_t ENGINE_init_ptr = NULL;
typedef void *(*ENGINE_load_private_key_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3);
ENGINE_load_private_key_t ENGINE_load_private_key_ptr = NULL;

#if defined(_MACOSX) || defined(TARGET_SUBPLATFORM_IPHONE)
#define MODULE_CRYPTO_NAME "./revsecurity"
#elif defined(_LINUX) || defined(__EMSCRIPTEN__)
#define MODULE_CRYPTO_NAME "./revsecurity"
#elif defined(TARGET_SUBPLATFORM_ANDROID)
#define MODULE_CRYPTO_NAME "./revsecurity"
#elif defined(_WINDOWS)
#define MODULE_CRYPTO_NAME "./revsecurity"
#endif

static module_t module_crypto = NULL;

void finalise_weak_link_crypto(void)
{
  module_unload(module_crypto);
  module_crypto = NULL;
}

int initialise_weak_link_crypto_with_path(const char *p_path)
{
  module_crypto = NULL;
  if (!module_load(p_path, &module_crypto))
  {
  #ifdef _DEBUG
    MCLog( "Unable to load library: %s\n", p_path);
  #endif
    goto err;
  }
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "OPENSSL_config", (handler_t *)&OPENSSL_config_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: OPENSSL_config\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "OPENSSL_init_crypto", (handler_t *)&OPENSSL_init_crypto_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: OPENSSL_init_crypto\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "CRYPTO_malloc", (handler_t *)&CRYPTO_malloc_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: CRYPTO_malloc\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "CRYPTO_free", (handler_t *)&CRYPTO_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: CRYPTO_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_CipherInit", (handler_t *)&EVP_CipherInit_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_CipherInit\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_CipherUpdate", (handler_t *)&EVP_CipherUpdate_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_CipherUpdate\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_CipherFinal", (handler_t *)&EVP_CipherFinal_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_CipherFinal\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_CIPHER_CTX_set_key_length", (handler_t *)&EVP_CIPHER_CTX_set_key_length_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_CIPHER_CTX_set_key_length\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_BytesToKey", (handler_t *)&EVP_BytesToKey_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_BytesToKey\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_get_cipherbyname", (handler_t *)&EVP_get_cipherbyname_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_get_cipherbyname\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_md5", (handler_t *)&EVP_md5_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_md5\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_PKEY_free", (handler_t *)&EVP_PKEY_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_PKEY_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_PKEY_get1_RSA", (handler_t *)&EVP_PKEY_get1_RSA_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_PKEY_get1_RSA\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_rc4", (handler_t *)&EVP_rc4_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_rc4\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_sha1", (handler_t *)&EVP_sha1_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_sha1\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_add_digest", (handler_t *)&EVP_add_digest_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_add_digest\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_DigestInit", (handler_t *)&EVP_DigestInit_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_DigestInit\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_DigestUpdate", (handler_t *)&EVP_DigestUpdate_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_DigestUpdate\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_DigestFinal", (handler_t *)&EVP_DigestFinal_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_DigestFinal\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_DecryptInit", (handler_t *)&EVP_DecryptInit_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_DecryptInit\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_DecryptUpdate", (handler_t *)&EVP_DecryptUpdate_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_DecryptUpdate\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_DecryptFinal", (handler_t *)&EVP_DecryptFinal_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_DecryptFinal\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_PKEY_new", (handler_t *)&EVP_PKEY_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_PKEY_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_PKEY_assign", (handler_t *)&EVP_PKEY_assign_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_PKEY_assign\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_CIPHER_key_length", (handler_t *)&EVP_CIPHER_key_length_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_CIPHER_key_length\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_CIPHER_get_key_length", (handler_t *)&EVP_CIPHER_get_key_length_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_CIPHER_get_key_length\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_CIPHER_CTX_new", (handler_t *)&EVP_CIPHER_CTX_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_CIPHER_CTX_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_CIPHER_CTX_free", (handler_t *)&EVP_CIPHER_CTX_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_CIPHER_CTX_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_CIPHER_CTX_key_length", (handler_t *)&EVP_CIPHER_CTX_key_length_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_CIPHER_CTX_key_length\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_CIPHER_CTX_get_key_length", (handler_t *)&EVP_CIPHER_CTX_get_key_length_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_CIPHER_CTX_get_key_length\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_CIPHER_CTX_block_size", (handler_t *)&EVP_CIPHER_CTX_block_size_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_CIPHER_CTX_block_size\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_CIPHER_CTX_get_block_size", (handler_t *)&EVP_CIPHER_CTX_get_block_size_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_CIPHER_CTX_get_block_size\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_CIPHER_CTX_reset", (handler_t *)&EVP_CIPHER_CTX_reset_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_CIPHER_CTX_reset\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_MD_CTX_new", (handler_t *)&EVP_MD_CTX_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_MD_CTX_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "EVP_MD_CTX_free", (handler_t *)&EVP_MD_CTX_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: EVP_MD_CTX_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "BIO_f_md", (handler_t *)&BIO_f_md_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: BIO_f_md\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "BIO_f_base64", (handler_t *)&BIO_f_base64_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: BIO_f_base64\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ERR_error_string", (handler_t *)&ERR_error_string_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ERR_error_string\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ERR_error_string_n", (handler_t *)&ERR_error_string_n_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ERR_error_string_n\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ERR_get_error", (handler_t *)&ERR_get_error_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ERR_get_error\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ERR_get_error_line_data", (handler_t *)&ERR_get_error_line_data_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ERR_get_error_line_data\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ERR_print_errors_fp", (handler_t *)&ERR_print_errors_fp_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ERR_print_errors_fp\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ERR_reason_error_string", (handler_t *)&ERR_reason_error_string_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ERR_reason_error_string\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ERR_remove_state", (handler_t *)&ERR_remove_state_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ERR_remove_state\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "RAND_seed", (handler_t *)&RAND_seed_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: RAND_seed\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "RAND_bytes", (handler_t *)&RAND_bytes_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: RAND_bytes\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_EXTENSION_get_object", (handler_t *)&X509_EXTENSION_get_object_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_EXTENSION_get_object\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_NAME_oneline", (handler_t *)&X509_NAME_oneline_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_NAME_oneline\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_NAME_get_text_by_NID", (handler_t *)&X509_NAME_get_text_by_NID_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_NAME_get_text_by_NID\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_verify_cert_error_string", (handler_t *)&X509_verify_cert_error_string_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_verify_cert_error_string\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_get_issuer_name", (handler_t *)&X509_get_issuer_name_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_get_issuer_name\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_get_subject_name", (handler_t *)&X509_get_subject_name_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_get_subject_name\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_get_ext_count", (handler_t *)&X509_get_ext_count_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_get_ext_count\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_get_ext_d2i", (handler_t *)&X509_get_ext_d2i_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_get_ext_d2i\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_get_pubkey", (handler_t *)&X509_get_pubkey_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_get_pubkey\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_get_ext", (handler_t *)&X509_get_ext_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_get_ext\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_check_private_key", (handler_t *)&X509_check_private_key_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_check_private_key\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_free", (handler_t *)&X509_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_CRL_free", (handler_t *)&X509_CRL_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_CRL_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "d2i_X509", (handler_t *)&d2i_X509_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: d2i_X509\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "i2d_X509", (handler_t *)&i2d_X509_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: i2d_X509\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "d2i_X509_bio", (handler_t *)&d2i_X509_bio_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: d2i_X509_bio\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "d2i_X509_CRL", (handler_t *)&d2i_X509_CRL_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: d2i_X509_CRL\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "d2i_PUBKEY_bio", (handler_t *)&d2i_PUBKEY_bio_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: d2i_PUBKEY_bio\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "d2i_PrivateKey_bio", (handler_t *)&d2i_PrivateKey_bio_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: d2i_PrivateKey_bio\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_STORE_add_cert", (handler_t *)&X509_STORE_add_cert_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_STORE_add_cert\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_STORE_add_crl", (handler_t *)&X509_STORE_add_crl_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_STORE_add_crl\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_STORE_CTX_get_error", (handler_t *)&X509_STORE_CTX_get_error_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_STORE_CTX_get_error\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_STORE_CTX_get_error_depth", (handler_t *)&X509_STORE_CTX_get_error_depth_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_STORE_CTX_get_error_depth\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_STORE_CTX_get_current_cert", (handler_t *)&X509_STORE_CTX_get_current_cert_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_STORE_CTX_get_current_cert\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_STORE_load_locations", (handler_t *)&X509_STORE_load_locations_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_STORE_load_locations\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509_STORE_set_flags", (handler_t *)&X509_STORE_set_flags_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509_STORE_set_flags\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "X509V3_EXT_get", (handler_t *)&X509V3_EXT_get_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: X509V3_EXT_get\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "GENERAL_NAMES_free", (handler_t *)&GENERAL_NAMES_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: GENERAL_NAMES_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "PEM_read_bio_X509_AUX", (handler_t *)&PEM_read_bio_X509_AUX_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: PEM_read_bio_X509_AUX\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "PEM_read_bio_PUBKEY", (handler_t *)&PEM_read_bio_PUBKEY_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: PEM_read_bio_PUBKEY\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "PEM_read_bio_RSAPublicKey", (handler_t *)&PEM_read_bio_RSAPublicKey_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: PEM_read_bio_RSAPublicKey\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "PEM_read_bio_PrivateKey", (handler_t *)&PEM_read_bio_PrivateKey_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: PEM_read_bio_PrivateKey\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "OBJ_obj2nid", (handler_t *)&OBJ_obj2nid_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: OBJ_obj2nid\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "OBJ_nid2sn", (handler_t *)&OBJ_nid2sn_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: OBJ_nid2sn\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "OBJ_nid2obj", (handler_t *)&OBJ_nid2obj_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: OBJ_nid2obj\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "OBJ_txt2obj", (handler_t *)&OBJ_txt2obj_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: OBJ_txt2obj\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "OBJ_txt2nid", (handler_t *)&OBJ_txt2nid_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: OBJ_txt2nid\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "OBJ_create", (handler_t *)&OBJ_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: OBJ_create\n");
#endif
goto err; 
}
module_resolve(module_crypto, SYMBOL_PREFIX "OBJ_NAME_do_all_sorted", (handler_t *)&OBJ_NAME_do_all_sorted_ptr);
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "RSA_new", (handler_t *)&RSA_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: RSA_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "RSA_free", (handler_t *)&RSA_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: RSA_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "RSA_private_decrypt", (handler_t *)&RSA_private_decrypt_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: RSA_private_decrypt\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "RSA_public_encrypt", (handler_t *)&RSA_public_encrypt_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: RSA_public_encrypt\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "RSA_private_encrypt", (handler_t *)&RSA_private_encrypt_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: RSA_private_encrypt\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "RSA_public_decrypt", (handler_t *)&RSA_public_decrypt_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: RSA_public_decrypt\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "RSA_size", (handler_t *)&RSA_size_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: RSA_size\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "RSA_set0_crt_params", (handler_t *)&RSA_set0_crt_params_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: RSA_set0_crt_params\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "RSA_set0_factors", (handler_t *)&RSA_set0_factors_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: RSA_set0_factors\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "RSA_set0_key", (handler_t *)&RSA_set0_key_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: RSA_set0_key\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "PKCS7_dataInit", (handler_t *)&PKCS7_dataInit_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: PKCS7_dataInit\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "PKCS7_dataFinal", (handler_t *)&PKCS7_dataFinal_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: PKCS7_dataFinal\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "PKCS7_content_new", (handler_t *)&PKCS7_content_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: PKCS7_content_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "PKCS7_add_certificate", (handler_t *)&PKCS7_add_certificate_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: PKCS7_add_certificate\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "PKCS7_add_attribute", (handler_t *)&PKCS7_add_attribute_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: PKCS7_add_attribute\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "PKCS7_add_signed_attribute", (handler_t *)&PKCS7_add_signed_attribute_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: PKCS7_add_signed_attribute\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "PKCS7_add_signature", (handler_t *)&PKCS7_add_signature_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: PKCS7_add_signature\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "PKCS7_set_type", (handler_t *)&PKCS7_set_type_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: PKCS7_set_type\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "PKCS7_new", (handler_t *)&PKCS7_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: PKCS7_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "PKCS7_free", (handler_t *)&PKCS7_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: PKCS7_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "i2d_PKCS7", (handler_t *)&i2d_PKCS7_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: i2d_PKCS7\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "d2i_PKCS7", (handler_t *)&d2i_PKCS7_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: d2i_PKCS7\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "d2i_PKCS7_bio", (handler_t *)&d2i_PKCS7_bio_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: d2i_PKCS7_bio\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "i2d_PKCS7_SIGNER_INFO", (handler_t *)&i2d_PKCS7_SIGNER_INFO_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: i2d_PKCS7_SIGNER_INFO\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "OPENSSL_sk_num", (handler_t *)&OPENSSL_sk_num_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: OPENSSL_sk_num\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "OPENSSL_sk_value", (handler_t *)&OPENSSL_sk_value_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: OPENSSL_sk_value\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "OPENSSL_sk_new", (handler_t *)&OPENSSL_sk_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: OPENSSL_sk_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "OPENSSL_sk_free", (handler_t *)&OPENSSL_sk_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: OPENSSL_sk_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "OPENSSL_sk_push", (handler_t *)&OPENSSL_sk_push_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: OPENSSL_sk_push\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "OPENSSL_sk_pop", (handler_t *)&OPENSSL_sk_pop_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: OPENSSL_sk_pop\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "BIO_new_file", (handler_t *)&BIO_new_file_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: BIO_new_file\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "BIO_read", (handler_t *)&BIO_read_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: BIO_read\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "BIO_write", (handler_t *)&BIO_write_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: BIO_write\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "BIO_push", (handler_t *)&BIO_push_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: BIO_push\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "BIO_new", (handler_t *)&BIO_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: BIO_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "BIO_gets", (handler_t *)&BIO_gets_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: BIO_gets\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "BIO_free", (handler_t *)&BIO_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: BIO_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "BIO_new_mem_buf", (handler_t *)&BIO_new_mem_buf_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: BIO_new_mem_buf\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "BIO_ctrl", (handler_t *)&BIO_ctrl_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: BIO_ctrl\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "BIO_free_all", (handler_t *)&BIO_free_all_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: BIO_free_all\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_item_d2i", (handler_t *)&ASN1_item_d2i_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_item_d2i\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_item_i2d", (handler_t *)&ASN1_item_i2d_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_item_i2d\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_item_new", (handler_t *)&ASN1_item_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_item_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_item_free", (handler_t *)&ASN1_item_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_item_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_mbstring_copy", (handler_t *)&ASN1_mbstring_copy_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_mbstring_copy\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_STRING_new", (handler_t *)&ASN1_STRING_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_STRING_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_STRING_data", (handler_t *)&ASN1_STRING_data_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_STRING_data\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_STRING_set", (handler_t *)&ASN1_STRING_set_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_STRING_set\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_STRING_free", (handler_t *)&ASN1_STRING_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_STRING_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_STRING_get0_data", (handler_t *)&ASN1_STRING_get0_data_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_STRING_get0_data\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_OCTET_STRING_new", (handler_t *)&ASN1_OCTET_STRING_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_OCTET_STRING_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_OCTET_STRING_set", (handler_t *)&ASN1_OCTET_STRING_set_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_OCTET_STRING_set\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_BIT_STRING_new", (handler_t *)&ASN1_BIT_STRING_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_BIT_STRING_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_BIT_STRING_set_bit", (handler_t *)&ASN1_BIT_STRING_set_bit_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_BIT_STRING_set_bit\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_TYPE_new", (handler_t *)&ASN1_TYPE_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_TYPE_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_TYPE_free", (handler_t *)&ASN1_TYPE_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_TYPE_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_NULL_new", (handler_t *)&ASN1_NULL_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_NULL_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_BIT_STRING_it", (handler_t *)&ASN1_BIT_STRING_it_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_BIT_STRING_it\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_IA5STRING_it", (handler_t *)&ASN1_IA5STRING_it_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_IA5STRING_it\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_BMPSTRING_it", (handler_t *)&ASN1_BMPSTRING_it_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_BMPSTRING_it\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_OCTET_STRING_it", (handler_t *)&ASN1_OCTET_STRING_it_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_OCTET_STRING_it\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_ANY_it", (handler_t *)&ASN1_ANY_it_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_ANY_it\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_OBJECT_it", (handler_t *)&ASN1_OBJECT_it_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_OBJECT_it\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ASN1_NULL_it", (handler_t *)&ASN1_NULL_it_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ASN1_NULL_it\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "BN_new", (handler_t *)&BN_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: BN_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "BN_free", (handler_t *)&BN_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: BN_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "BN_set_word", (handler_t *)&BN_set_word_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: BN_set_word\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "BN_bin2bn", (handler_t *)&BN_bin2bn_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: BN_bin2bn\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "DH_free", (handler_t *)&DH_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: DH_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "DH_new", (handler_t *)&DH_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: DH_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "DH_set0_pqg", (handler_t *)&DH_set0_pqg_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: DH_set0_pqg\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ENGINE_by_id", (handler_t *)&ENGINE_by_id_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ENGINE_by_id\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ENGINE_finish", (handler_t *)&ENGINE_finish_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ENGINE_finish\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ENGINE_free", (handler_t *)&ENGINE_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ENGINE_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ENGINE_init", (handler_t *)&ENGINE_init_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ENGINE_init\n");
#endif
goto err; 
}
  if (!module_resolve(module_crypto, SYMBOL_PREFIX "ENGINE_load_private_key", (handler_t *)&ENGINE_load_private_key_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: ENGINE_load_private_key\n");
#endif
goto err; 
}

  return 1;

err:
  if (module_crypto != NULL)
    module_unload(module_crypto);

  return 0;
}

int initialise_weak_link_crypto(void)
{
#if defined(_LINUX)
  if(!initialise_weak_link_crypto_with_path("./revsecurity"))
#else
  if (!initialise_weak_link_crypto_with_path(MODULE_CRYPTO_NAME))
#endif
{
#ifdef _DEBUG
    MCLog( "Warning: could not load library: ./revsecurity\n");
#endif
return 0;
}
return -1;
}

#if defined(_LINUX)
void initialise_required_weak_link_crypto(void)
{
  if (!initialise_weak_link_crypto())
  {
    failed_required_link("crypto", "./revsecurity");
  }
}
#endif

void OPENSSL_config(void *pArg0)
{
  OPENSSL_config_ptr(pArg0);
}

int OPENSSL_init_crypto(long long int pArg0, void *pArg1)
{
  return OPENSSL_init_crypto_ptr(pArg0, pArg1);
}

void *CRYPTO_malloc(int pArg0)
{
  return CRYPTO_malloc_ptr(pArg0);
}

void CRYPTO_free(void *pArg0)
{
  CRYPTO_free_ptr(pArg0);
}

int EVP_CipherInit(void *pArg0, void *pArg1, void *pArg2, void *pArg3, int pArg4)
{
  return EVP_CipherInit_ptr(pArg0, pArg1, pArg2, pArg3, pArg4);
}

int EVP_CipherUpdate(void *pArg0, void *pArg1, void *pArg2, void *pArg3, int pArg4)
{
  return EVP_CipherUpdate_ptr(pArg0, pArg1, pArg2, pArg3, pArg4);
}

int EVP_CipherFinal(void *pArg0, void *pArg1, void *pArg2)
{
  return EVP_CipherFinal_ptr(pArg0, pArg1, pArg2);
}

int EVP_CIPHER_CTX_set_key_length(void *pArg0, int pArg1)
{
  return EVP_CIPHER_CTX_set_key_length_ptr(pArg0, pArg1);
}

int EVP_BytesToKey(void *pArg0, void *pArg1, void *pArg2, void *pArg3, int pArg4, int pArg5, void *pArg6, void *pArg7)
{
  return EVP_BytesToKey_ptr(pArg0, pArg1, pArg2, pArg3, pArg4, pArg5, pArg6, pArg7);
}

void *EVP_get_cipherbyname(void *pArg0)
{
  return EVP_get_cipherbyname_ptr(pArg0);
}

void *EVP_md5(void)
{
  return EVP_md5_ptr();
}

void EVP_PKEY_free(void *pArg0)
{
  EVP_PKEY_free_ptr(pArg0);
}

void *EVP_PKEY_get1_RSA(void *pArg0)
{
  return EVP_PKEY_get1_RSA_ptr(pArg0);
}

void *EVP_rc4(void)
{
  return EVP_rc4_ptr();
}

void *EVP_sha1(void)
{
  return EVP_sha1_ptr();
}

int EVP_add_digest(void *pArg0)
{
  return EVP_add_digest_ptr(pArg0);
}

int EVP_DigestInit(void *pArg0, void *pArg1)
{
  return EVP_DigestInit_ptr(pArg0, pArg1);
}

int EVP_DigestUpdate(void *pArg0, void *pArg1, int pArg2)
{
  return EVP_DigestUpdate_ptr(pArg0, pArg1, pArg2);
}

int EVP_DigestFinal(void *pArg0, void *pArg1, void *pArg2)
{
  return EVP_DigestFinal_ptr(pArg0, pArg1, pArg2);
}

int EVP_DecryptInit(void *pArg0, void *pArg1, void *pArg2, void *pArg3)
{
  return EVP_DecryptInit_ptr(pArg0, pArg1, pArg2, pArg3);
}

int EVP_DecryptUpdate(void *pArg0, void *pArg1, void *pArg2, void *pArg3, int pArg4)
{
  return EVP_DecryptUpdate_ptr(pArg0, pArg1, pArg2, pArg3, pArg4);
}

int EVP_DecryptFinal(void *pArg0, void *pArg1, void *pArg2)
{
  return EVP_DecryptFinal_ptr(pArg0, pArg1, pArg2);
}

void *EVP_PKEY_new(void)
{
  return EVP_PKEY_new_ptr();
}

void *EVP_PKEY_assign(void *pArg0, int pArg1, void *pArg2)
{
  return EVP_PKEY_assign_ptr(pArg0, pArg1, pArg2);
}

int EVP_CIPHER_key_length(void *pArg0)
{
  return EVP_CIPHER_key_length_ptr(pArg0);
}

int EVP_CIPHER_get_key_length(void *pArg0)
{
  return EVP_CIPHER_get_key_length_ptr(pArg0);
}

void *EVP_CIPHER_CTX_new(void)
{
  return EVP_CIPHER_CTX_new_ptr();
}

void EVP_CIPHER_CTX_free(void *pArg0)
{
  EVP_CIPHER_CTX_free_ptr(pArg0);
}

int EVP_CIPHER_CTX_key_length(void *pArg0)
{
  return EVP_CIPHER_CTX_key_length_ptr(pArg0);
}

int EVP_CIPHER_CTX_get_key_length(void *pArg0)
{
  return EVP_CIPHER_CTX_get_key_length_ptr(pArg0);
}

int EVP_CIPHER_CTX_block_size(void *pArg0)
{
  return EVP_CIPHER_CTX_block_size_ptr(pArg0);
}

int EVP_CIPHER_CTX_get_block_size(void *pArg0)
{
  return EVP_CIPHER_CTX_get_block_size_ptr(pArg0);
}

void EVP_CIPHER_CTX_reset(void *pArg0)
{
  EVP_CIPHER_CTX_reset_ptr(pArg0);
}

void *EVP_MD_CTX_new(void)
{
  return EVP_MD_CTX_new_ptr();
}

void EVP_MD_CTX_free(void *pArg0)
{
  EVP_MD_CTX_free_ptr(pArg0);
}

void *BIO_f_md(void)
{
  return BIO_f_md_ptr();
}

void *BIO_f_base64(void)
{
  return BIO_f_base64_ptr();
}

void *ERR_error_string(int pArg0, void *pArg1)
{
  return ERR_error_string_ptr(pArg0, pArg1);
}

void ERR_error_string_n(int pArg0, void *pArg1, int pArg2)
{
  ERR_error_string_n_ptr(pArg0, pArg1, pArg2);
}

int ERR_get_error(void)
{
  return ERR_get_error_ptr();
}

int ERR_get_error_line_data(void *pArg0, void *pArg1)
{
  return ERR_get_error_line_data_ptr(pArg0, pArg1);
}

void ERR_print_errors_fp(void *pArg0)
{
  ERR_print_errors_fp_ptr(pArg0);
}

void *ERR_reason_error_string(int pArg0)
{
  return ERR_reason_error_string_ptr(pArg0);
}

void ERR_remove_state(int pArg0)
{
  ERR_remove_state_ptr(pArg0);
}

void RAND_seed(void *pArg0, int pArg1)
{
  RAND_seed_ptr(pArg0, pArg1);
}

int RAND_bytes(void *pArg0, int pArg1)
{
  return RAND_bytes_ptr(pArg0, pArg1);
}

void *X509_EXTENSION_get_object(void *pArg0)
{
  return X509_EXTENSION_get_object_ptr(pArg0);
}

void *X509_NAME_oneline(void *pArg0, void *pArg1, int pArg2)
{
  return X509_NAME_oneline_ptr(pArg0, pArg1, pArg2);
}

int X509_NAME_get_text_by_NID(void *pArg0, int pArg1, void *pArg2, int pArg3)
{
  return X509_NAME_get_text_by_NID_ptr(pArg0, pArg1, pArg2, pArg3);
}

void *X509_verify_cert_error_string(int pArg0)
{
  return X509_verify_cert_error_string_ptr(pArg0);
}

void *X509_get_issuer_name(void *pArg0)
{
  return X509_get_issuer_name_ptr(pArg0);
}

void *X509_get_subject_name(void *pArg0)
{
  return X509_get_subject_name_ptr(pArg0);
}

int X509_get_ext_count(void *pArg0)
{
  return X509_get_ext_count_ptr(pArg0);
}

void *X509_get_ext_d2i(void *pArg0, int pArg1, void *pArg2, void *pArg3)
{
  return X509_get_ext_d2i_ptr(pArg0, pArg1, pArg2, pArg3);
}

void *X509_get_pubkey(void *pArg0)
{
  return X509_get_pubkey_ptr(pArg0);
}

void *X509_get_ext(void *pArg0, int pArg1)
{
  return X509_get_ext_ptr(pArg0, pArg1);
}

int X509_check_private_key(void *pArg0, void *pArg1)
{
  return X509_check_private_key_ptr(pArg0, pArg1);
}

void X509_free(void *pArg0)
{
  X509_free_ptr(pArg0);
}

void X509_CRL_free(void *pArg0)
{
  X509_CRL_free_ptr(pArg0);
}

void *d2i_X509(void *pArg0, void *pArg1, int pArg2)
{
  return d2i_X509_ptr(pArg0, pArg1, pArg2);
}

int i2d_X509(void *pArg0, void *pArg1)
{
  return i2d_X509_ptr(pArg0, pArg1);
}

void *d2i_X509_bio(void *pArg0, void *pArg1)
{
  return d2i_X509_bio_ptr(pArg0, pArg1);
}

void *d2i_X509_CRL(void *pArg0, void *pArg1, int pArg2)
{
  return d2i_X509_CRL_ptr(pArg0, pArg1, pArg2);
}

void *d2i_PUBKEY_bio(void *pArg0, void *pArg1)
{
  return d2i_PUBKEY_bio_ptr(pArg0, pArg1);
}

void *d2i_PrivateKey_bio(void *pArg0, void *pArg1)
{
  return d2i_PrivateKey_bio_ptr(pArg0, pArg1);
}

int X509_STORE_add_cert(void *pArg0, void *pArg1)
{
  return X509_STORE_add_cert_ptr(pArg0, pArg1);
}

int X509_STORE_add_crl(void *pArg0, void *pArg1)
{
  return X509_STORE_add_crl_ptr(pArg0, pArg1);
}

int X509_STORE_CTX_get_error(void *pArg0)
{
  return X509_STORE_CTX_get_error_ptr(pArg0);
}

int X509_STORE_CTX_get_error_depth(void *pArg0)
{
  return X509_STORE_CTX_get_error_depth_ptr(pArg0);
}

void *X509_STORE_CTX_get_current_cert(void *pArg0)
{
  return X509_STORE_CTX_get_current_cert_ptr(pArg0);
}

int X509_STORE_load_locations(void *pArg0, void *pArg1, void *pArg2)
{
  return X509_STORE_load_locations_ptr(pArg0, pArg1, pArg2);
}

int X509_STORE_set_flags(void *pArg0, int pArg1)
{
  return X509_STORE_set_flags_ptr(pArg0, pArg1);
}

void *X509V3_EXT_get(void *pArg0)
{
  return X509V3_EXT_get_ptr(pArg0);
}

void GENERAL_NAMES_free(void *pArg0)
{
  GENERAL_NAMES_free_ptr(pArg0);
}

void *PEM_read_bio_X509_AUX(void *pArg0, void *pArg1, void *pArg2, void *pArg3)
{
  return PEM_read_bio_X509_AUX_ptr(pArg0, pArg1, pArg2, pArg3);
}

void *PEM_read_bio_PUBKEY(void *pArg0, void *pArg1, void *pArg2, void *pArg3)
{
  return PEM_read_bio_PUBKEY_ptr(pArg0, pArg1, pArg2, pArg3);
}

void *PEM_read_bio_RSAPublicKey(void *pArg0, void *pArg1, void *pArg2, void *pArg3)
{
  return PEM_read_bio_RSAPublicKey_ptr(pArg0, pArg1, pArg2, pArg3);
}

void *PEM_read_bio_PrivateKey(void *pArg0, void *pArg1, void *pArg2, void *pArg3)
{
  return PEM_read_bio_PrivateKey_ptr(pArg0, pArg1, pArg2, pArg3);
}

int OBJ_obj2nid(void *pArg0)
{
  return OBJ_obj2nid_ptr(pArg0);
}

int OBJ_nid2sn(void *pArg0)
{
  return OBJ_nid2sn_ptr(pArg0);
}

void *OBJ_nid2obj(int pArg0)
{
  return OBJ_nid2obj_ptr(pArg0);
}

void *OBJ_txt2obj(void *pArg0, int pArg1)
{
  return OBJ_txt2obj_ptr(pArg0, pArg1);
}

int OBJ_txt2nid(void *pArg0)
{
  return OBJ_txt2nid_ptr(pArg0);
}

int OBJ_create(void *pArg0, void *pArg1, void *pArg2)
{
  return OBJ_create_ptr(pArg0, pArg1, pArg2);
}

void OBJ_NAME_do_all_sorted(int pArg0, void *pArg1, void *pArg2)
{
  OBJ_NAME_do_all_sorted_ptr(pArg0, pArg1, pArg2);
}

void *RSA_new(void)
{
  return RSA_new_ptr();
}

void RSA_free(void *pArg0)
{
  RSA_free_ptr(pArg0);
}

int RSA_private_decrypt(int pArg0, void *pArg1, void *pArg2, void *pArg3, int pArg4)
{
  return RSA_private_decrypt_ptr(pArg0, pArg1, pArg2, pArg3, pArg4);
}

int RSA_public_encrypt(int pArg0, void *pArg1, void *pArg2, void *pArg3, int pArg4)
{
  return RSA_public_encrypt_ptr(pArg0, pArg1, pArg2, pArg3, pArg4);
}

int RSA_private_encrypt(int pArg0, void *pArg1, void *pArg2, void *pArg3, int pArg4)
{
  return RSA_private_encrypt_ptr(pArg0, pArg1, pArg2, pArg3, pArg4);
}

int RSA_public_decrypt(int pArg0, void *pArg1, void *pArg2, void *pArg3, int pArg4)
{
  return RSA_public_decrypt_ptr(pArg0, pArg1, pArg2, pArg3, pArg4);
}

int RSA_size(void *pArg0)
{
  return RSA_size_ptr(pArg0);
}

int RSA_set0_crt_params(void *pArg0, void *pArg1, void *pArg2, void *pArg3)
{
  return RSA_set0_crt_params_ptr(pArg0, pArg1, pArg2, pArg3);
}

int RSA_set0_factors(void *pArg0, void *pArg1, void *pArg2)
{
  return RSA_set0_factors_ptr(pArg0, pArg1, pArg2);
}

int RSA_set0_key(void *pArg0, void *pArg1, void *pArg2, void *pArg3)
{
  return RSA_set0_key_ptr(pArg0, pArg1, pArg2, pArg3);
}

void *PKCS7_dataInit(void *pArg0, void *pArg1)
{
  return PKCS7_dataInit_ptr(pArg0, pArg1);
}

int PKCS7_dataFinal(void *pArg0, void *pArg1)
{
  return PKCS7_dataFinal_ptr(pArg0, pArg1);
}

int PKCS7_content_new(void *pArg0, int pArg1)
{
  return PKCS7_content_new_ptr(pArg0, pArg1);
}

int PKCS7_add_certificate(void *pArg0, void *pArg1)
{
  return PKCS7_add_certificate_ptr(pArg0, pArg1);
}

int PKCS7_add_attribute(void *pArg0, int pArg1, int pArg2, void *pArg3)
{
  return PKCS7_add_attribute_ptr(pArg0, pArg1, pArg2, pArg3);
}

int PKCS7_add_signed_attribute(void *pArg0, int pArg1, int pArg2, void *pArg3)
{
  return PKCS7_add_signed_attribute_ptr(pArg0, pArg1, pArg2, pArg3);
}

void *PKCS7_add_signature(void *pArg0, void *pArg1, void *pArg2, void *pArg3)
{
  return PKCS7_add_signature_ptr(pArg0, pArg1, pArg2, pArg3);
}

void *PKCS7_set_type(void *pArg0, int pArg1)
{
  return PKCS7_set_type_ptr(pArg0, pArg1);
}

void *PKCS7_new(void)
{
  return PKCS7_new_ptr();
}

void PKCS7_free(void *pArg0)
{
  PKCS7_free_ptr(pArg0);
}

int i2d_PKCS7(void *pArg0, void *pArg1)
{
  return i2d_PKCS7_ptr(pArg0, pArg1);
}

void *d2i_PKCS7(void *pArg0, void *pArg1, int pArg2)
{
  return d2i_PKCS7_ptr(pArg0, pArg1, pArg2);
}

void *d2i_PKCS7_bio(void *pArg0, void *pArg1)
{
  return d2i_PKCS7_bio_ptr(pArg0, pArg1);
}

int i2d_PKCS7_SIGNER_INFO(void *pArg0, void *pArg1)
{
  return i2d_PKCS7_SIGNER_INFO_ptr(pArg0, pArg1);
}

int OPENSSL_sk_num(void *pArg0)
{
  return OPENSSL_sk_num_ptr(pArg0);
}

void *OPENSSL_sk_value(void *pArg0, int pArg1)
{
  return OPENSSL_sk_value_ptr(pArg0, pArg1);
}

void *OPENSSL_sk_new(void *pArg0)
{
  return OPENSSL_sk_new_ptr(pArg0);
}

void OPENSSL_sk_free(void *pArg0)
{
  OPENSSL_sk_free_ptr(pArg0);
}

int OPENSSL_sk_push(void *pArg0, void *pArg1)
{
  return OPENSSL_sk_push_ptr(pArg0, pArg1);
}

void *OPENSSL_sk_pop(void *pArg0)
{
  return OPENSSL_sk_pop_ptr(pArg0);
}

void *BIO_new_file(void *pArg0, void *pArg1)
{
  return BIO_new_file_ptr(pArg0, pArg1);
}

int BIO_read(void *pArg0, void *pArg1, int pArg2)
{
  return BIO_read_ptr(pArg0, pArg1, pArg2);
}

int BIO_write(void *pArg0, void *pArg1, int pArg2)
{
  return BIO_write_ptr(pArg0, pArg1, pArg2);
}

void *BIO_push(void *pArg0, void *pArg1)
{
  return BIO_push_ptr(pArg0, pArg1);
}

void *BIO_new(void *pArg0)
{
  return BIO_new_ptr(pArg0);
}

int BIO_gets(void *pArg0, void *pArg1, int pArg2)
{
  return BIO_gets_ptr(pArg0, pArg1, pArg2);
}

int BIO_free(void *pArg0)
{
  return BIO_free_ptr(pArg0);
}

void *BIO_new_mem_buf(void *pArg0, int pArg1)
{
  return BIO_new_mem_buf_ptr(pArg0, pArg1);
}

int BIO_ctrl(void *pArg0, int pArg1, int pArg2, void *pArg3)
{
  return BIO_ctrl_ptr(pArg0, pArg1, pArg2, pArg3);
}

int BIO_free_all(void *pArg0)
{
  return BIO_free_all_ptr(pArg0);
}

void *ASN1_item_d2i(void *pArg0, void *pArg1, int pArg2, void *pArg3)
{
  return ASN1_item_d2i_ptr(pArg0, pArg1, pArg2, pArg3);
}

int ASN1_item_i2d(void *pArg0, void *pArg1, void *pArg2)
{
  return ASN1_item_i2d_ptr(pArg0, pArg1, pArg2);
}

void *ASN1_item_new(void *pArg0)
{
  return ASN1_item_new_ptr(pArg0);
}

void ASN1_item_free(void *pArg0, void *pArg1)
{
  ASN1_item_free_ptr(pArg0, pArg1);
}

int ASN1_mbstring_copy(void *pArg0, void *pArg1, int pArg2, int pArg3, int pArg4)
{
  return ASN1_mbstring_copy_ptr(pArg0, pArg1, pArg2, pArg3, pArg4);
}

void *ASN1_STRING_new(void)
{
  return ASN1_STRING_new_ptr();
}

void *ASN1_STRING_data(void *pArg0)
{
  return ASN1_STRING_data_ptr(pArg0);
}

int ASN1_STRING_set(void *pArg0, void *pArg1, int pArg2)
{
  return ASN1_STRING_set_ptr(pArg0, pArg1, pArg2);
}

void ASN1_STRING_free(void *pArg0)
{
  ASN1_STRING_free_ptr(pArg0);
}

void *ASN1_STRING_get0_data(void *pArg0)
{
  return ASN1_STRING_get0_data_ptr(pArg0);
}

void *ASN1_OCTET_STRING_new(void)
{
  return ASN1_OCTET_STRING_new_ptr();
}

int ASN1_OCTET_STRING_set(void *pArg0, void *pArg1, int pArg2)
{
  return ASN1_OCTET_STRING_set_ptr(pArg0, pArg1, pArg2);
}

void *ASN1_BIT_STRING_new(void)
{
  return ASN1_BIT_STRING_new_ptr();
}

int ASN1_BIT_STRING_set_bit(void *pArg0, int pArg1, int pArg2)
{
  return ASN1_BIT_STRING_set_bit_ptr(pArg0, pArg1, pArg2);
}

void *ASN1_TYPE_new(void)
{
  return ASN1_TYPE_new_ptr();
}

void ASN1_TYPE_free(void *pArg0)
{
  ASN1_TYPE_free_ptr(pArg0);
}

void *ASN1_NULL_new(void)
{
  return ASN1_NULL_new_ptr();
}

void *ASN1_BIT_STRING_it(void)
{
  return ASN1_BIT_STRING_it_ptr();
}

void *ASN1_IA5STRING_it(void)
{
  return ASN1_IA5STRING_it_ptr();
}

void *ASN1_BMPSTRING_it(void)
{
  return ASN1_BMPSTRING_it_ptr();
}

void *ASN1_OCTET_STRING_it(void)
{
  return ASN1_OCTET_STRING_it_ptr();
}

void *ASN1_ANY_it(void)
{
  return ASN1_ANY_it_ptr();
}

void *ASN1_OBJECT_it(void)
{
  return ASN1_OBJECT_it_ptr();
}

void *ASN1_NULL_it(void)
{
  return ASN1_NULL_it_ptr();
}

void *BN_new(void)
{
  return BN_new_ptr();
}

void BN_free(void *pArg0)
{
  BN_free_ptr(pArg0);
}

int BN_set_word(void *pArg0, int pArg1)
{
  return BN_set_word_ptr(pArg0, pArg1);
}

void *BN_bin2bn(void *pArg0, int pArg1, void *pArg2)
{
  return BN_bin2bn_ptr(pArg0, pArg1, pArg2);
}

void DH_free(void *pArg0)
{
  DH_free_ptr(pArg0);
}

void *DH_new(void)
{
  return DH_new_ptr();
}

int DH_set0_pqg(void *pArg0, void *pArg1, void *pArg2, void *pArg3)
{
  return DH_set0_pqg_ptr(pArg0, pArg1, pArg2, pArg3);
}

void *ENGINE_by_id(void *pArg0)
{
  return ENGINE_by_id_ptr(pArg0);
}

int ENGINE_finish(void *pArg0)
{
  return ENGINE_finish_ptr(pArg0);
}

int ENGINE_free(void *pArg0)
{
  return ENGINE_free_ptr(pArg0);
}

int ENGINE_init(void *pArg0)
{
  return ENGINE_init_ptr(pArg0);
}

void *ENGINE_load_private_key(void *pArg0, void *pArg1, void *pArg2, void *pArg3)
{
  return ENGINE_load_private_key_ptr(pArg0, pArg1, pArg2, pArg3);
}

typedef int (*OPENSSL_init_ssl_t)(long long int pArg0, void *pArg1);
OPENSSL_init_ssl_t OPENSSL_init_ssl_ptr = NULL;
typedef void *(*SSL_new_t)(void *pArg0);
SSL_new_t SSL_new_ptr = NULL;
typedef void (*SSL_free_t)(void *pArg0);
SSL_free_t SSL_free_ptr = NULL;
typedef int (*SSL_accept_t)(void *pArg0);
SSL_accept_t SSL_accept_ptr = NULL;
typedef int (*SSL_connect_t)(void *pArg0);
SSL_connect_t SSL_connect_ptr = NULL;
typedef int (*SSL_read_t)(void *pArg0, void *pArg1, int pArg2);
SSL_read_t SSL_read_ptr = NULL;
typedef int (*SSL_write_t)(void *pArg0, void *pArg1, int pArg2);
SSL_write_t SSL_write_ptr = NULL;
typedef int (*SSL_get_error_t)(void *pArg0, int pArg1);
SSL_get_error_t SSL_get_error_ptr = NULL;
typedef int (*SSL_clear_t)(void *pArg0);
SSL_clear_t SSL_clear_ptr = NULL;
typedef int (*SSL_set_fd_t)(void *pArg0, int pArg1);
SSL_set_fd_t SSL_set_fd_ptr = NULL;
typedef int (*SSL_shutdown_t)(void *pArg0);
SSL_shutdown_t SSL_shutdown_ptr = NULL;
typedef void (*SSL_set_connect_state_t)(void *pArg0);
SSL_set_connect_state_t SSL_set_connect_state_ptr = NULL;
typedef void (*SSL_set_accept_state_t)(void *pArg0);
SSL_set_accept_state_t SSL_set_accept_state_ptr = NULL;
typedef void *(*SSL_get_peer_certificate_t)(void *pArg0);
SSL_get_peer_certificate_t SSL_get_peer_certificate_ptr = NULL;
typedef void *(*SSL_get1_peer_certificate_t)(void *pArg0);
SSL_get1_peer_certificate_t SSL_get1_peer_certificate_ptr = NULL;
typedef int (*SSL_get_verify_result_t)(void *pArg0);
SSL_get_verify_result_t SSL_get_verify_result_ptr = NULL;
typedef void *(*SSL_get_peer_cert_chain_t)(void *pArg0);
SSL_get_peer_cert_chain_t SSL_get_peer_cert_chain_ptr = NULL;
typedef void *(*SSL_get_current_cipher_t)(void *pArg0);
SSL_get_current_cipher_t SSL_get_current_cipher_ptr = NULL;
typedef int (*SSL_get_fd_t)(void *pArg0);
SSL_get_fd_t SSL_get_fd_ptr = NULL;
typedef void *(*SSL_get_session_t)(void *pArg0);
SSL_get_session_t SSL_get_session_ptr = NULL;
typedef void *(*SSL_get_shared_ciphers_t)(void *pArg0, void *pArg1, int pArg2);
SSL_get_shared_ciphers_t SSL_get_shared_ciphers_ptr = NULL;
typedef int (*SSL_pending_t)(void *pArg0);
SSL_pending_t SSL_pending_ptr = NULL;
typedef void (*SSL_set_quiet_shutdown_t)(void *pArg0, int pArg1);
SSL_set_quiet_shutdown_t SSL_set_quiet_shutdown_ptr = NULL;
typedef int (*SSL_set_options_t)(void *pArg0, int pArg1);
SSL_set_options_t SSL_set_options_ptr = NULL;
typedef int (*SSL_check_private_key_t)(void *pArg0);
SSL_check_private_key_t SSL_check_private_key_ptr = NULL;
typedef int (*SSL_ctrl_t)(void *pArg0, int pArg1, int pArg2, void *pArg3);
SSL_ctrl_t SSL_ctrl_ptr = NULL;
typedef int (*SSL_set_ex_data_t)(void *pArg0, int pArg1, void *pArg2);
SSL_set_ex_data_t SSL_set_ex_data_ptr = NULL;
typedef void (*SSL_set_verify_t)(void *pArg0, int pArg1, void *pArg2);
SSL_set_verify_t SSL_set_verify_ptr = NULL;
typedef int (*SSL_use_PrivateKey_t)(void *pArg0, void *pArg1);
SSL_use_PrivateKey_t SSL_use_PrivateKey_ptr = NULL;
typedef int (*SSL_use_PrivateKey_file_t)(void *pArg0, void *pArg1, int pArg2);
SSL_use_PrivateKey_file_t SSL_use_PrivateKey_file_ptr = NULL;
typedef int (*SSL_use_certificate_file_t)(void *pArg0, void *pArg1, int pArg2);
SSL_use_certificate_file_t SSL_use_certificate_file_ptr = NULL;
typedef void *(*SSL_CTX_new_t)(void *pArg0);
SSL_CTX_new_t SSL_CTX_new_ptr = NULL;
typedef void (*SSL_CTX_free_t)(void *pArg0);
SSL_CTX_free_t SSL_CTX_free_ptr = NULL;
typedef int (*SSL_CTX_set_default_verify_paths_t)(void *pArg0);
SSL_CTX_set_default_verify_paths_t SSL_CTX_set_default_verify_paths_ptr = NULL;
typedef int (*SSL_CTX_load_verify_locations_t)(void *pArg0, void *pArg1, void *pArg2);
SSL_CTX_load_verify_locations_t SSL_CTX_load_verify_locations_ptr = NULL;
typedef void (*SSL_CTX_set_verify_t)(void *pArg0, int pArg1, void *pArg2);
SSL_CTX_set_verify_t SSL_CTX_set_verify_ptr = NULL;
typedef void (*SSL_CTX_set_verify_depth_t)(void *pArg0, int pArg1);
SSL_CTX_set_verify_depth_t SSL_CTX_set_verify_depth_ptr = NULL;
typedef void *(*SSL_CTX_get_cert_store_t)(void *pArg0);
SSL_CTX_get_cert_store_t SSL_CTX_get_cert_store_ptr = NULL;
typedef int (*SSL_CTX_check_private_key_t)(void *pArg0);
SSL_CTX_check_private_key_t SSL_CTX_check_private_key_ptr = NULL;
typedef int (*SSL_CTX_ctrl_t)(void *pArg0, int pArg1, int pArg2, void *pArg3);
SSL_CTX_ctrl_t SSL_CTX_ctrl_ptr = NULL;
typedef int (*SSL_CTX_set_cipher_list_t)(void *pArg0, void *pArg1);
SSL_CTX_set_cipher_list_t SSL_CTX_set_cipher_list_ptr = NULL;
typedef int (*SSL_CTX_set_session_id_context_t)(void *pArg0, void *pArg1, int pArg2);
SSL_CTX_set_session_id_context_t SSL_CTX_set_session_id_context_ptr = NULL;
typedef int (*SSL_CTX_set_options_t)(void *pArg0, int pArg1);
SSL_CTX_set_options_t SSL_CTX_set_options_ptr = NULL;
typedef int (*SSL_CTX_use_certificate_file_t)(void *pArg0, void *pArg1, int pArg2);
SSL_CTX_use_certificate_file_t SSL_CTX_use_certificate_file_ptr = NULL;
typedef int (*SSL_CTX_use_PrivateKey_file_t)(void *pArg0, void *pArg1, int pArg2);
SSL_CTX_use_PrivateKey_file_t SSL_CTX_use_PrivateKey_file_ptr = NULL;
typedef int (*SSL_CTX_use_certificate_chain_file_t)(void *pArg0, void *pArg1);
SSL_CTX_use_certificate_chain_file_t SSL_CTX_use_certificate_chain_file_ptr = NULL;
typedef void *(*SSL_CIPHER_get_name_t)(void *pArg0);
SSL_CIPHER_get_name_t SSL_CIPHER_get_name_ptr = NULL;
typedef int (*SSL_SESSION_set_timeout_t)(void *pArg0, int pArg1);
SSL_SESSION_set_timeout_t SSL_SESSION_set_timeout_ptr = NULL;
typedef void *(*TLS_method_t)(void);
TLS_method_t TLS_method_ptr = NULL;
typedef void *(*TLSv1_client_method_t)(void);
TLSv1_client_method_t TLSv1_client_method_ptr = NULL;
typedef void *(*TLSv1_server_method_t)(void);
TLSv1_server_method_t TLSv1_server_method_ptr = NULL;

#if defined(_MACOSX) || defined(TARGET_SUBPLATFORM_IPHONE)
#define MODULE_SSL_NAME "./revsecurity"
#elif defined(_LINUX) || defined(__EMSCRIPTEN__)
#define MODULE_SSL_NAME "./revsecurity"
#elif defined(TARGET_SUBPLATFORM_ANDROID)
#define MODULE_SSL_NAME "./revsecurity"
#elif defined(_WINDOWS)
#define MODULE_SSL_NAME "./revsecurity"
#endif

static module_t module_ssl = NULL;

void finalise_weak_link_ssl(void)
{
  module_unload(module_ssl);
  module_ssl = NULL;
}

int initialise_weak_link_ssl_with_path(const char *p_path)
{
  module_ssl = NULL;
  if (!module_load(p_path, &module_ssl))
  {
  #ifdef _DEBUG
    MCLog( "Unable to load library: %s\n", p_path);
  #endif
    goto err;
  }
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "OPENSSL_init_ssl", (handler_t *)&OPENSSL_init_ssl_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: OPENSSL_init_ssl\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_new", (handler_t *)&SSL_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_free", (handler_t *)&SSL_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_accept", (handler_t *)&SSL_accept_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_accept\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_connect", (handler_t *)&SSL_connect_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_connect\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_read", (handler_t *)&SSL_read_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_read\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_write", (handler_t *)&SSL_write_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_write\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_get_error", (handler_t *)&SSL_get_error_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_get_error\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_clear", (handler_t *)&SSL_clear_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_clear\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_set_fd", (handler_t *)&SSL_set_fd_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_set_fd\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_shutdown", (handler_t *)&SSL_shutdown_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_shutdown\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_set_connect_state", (handler_t *)&SSL_set_connect_state_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_set_connect_state\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_set_accept_state", (handler_t *)&SSL_set_accept_state_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_set_accept_state\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_get_peer_certificate", (handler_t *)&SSL_get_peer_certificate_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_get_peer_certificate\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_get1_peer_certificate", (handler_t *)&SSL_get1_peer_certificate_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_get1_peer_certificate\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_get_verify_result", (handler_t *)&SSL_get_verify_result_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_get_verify_result\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_get_peer_cert_chain", (handler_t *)&SSL_get_peer_cert_chain_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_get_peer_cert_chain\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_get_current_cipher", (handler_t *)&SSL_get_current_cipher_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_get_current_cipher\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_get_fd", (handler_t *)&SSL_get_fd_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_get_fd\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_get_session", (handler_t *)&SSL_get_session_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_get_session\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_get_shared_ciphers", (handler_t *)&SSL_get_shared_ciphers_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_get_shared_ciphers\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_pending", (handler_t *)&SSL_pending_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_pending\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_set_quiet_shutdown", (handler_t *)&SSL_set_quiet_shutdown_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_set_quiet_shutdown\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_set_options", (handler_t *)&SSL_set_options_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_set_options\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_check_private_key", (handler_t *)&SSL_check_private_key_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_check_private_key\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_ctrl", (handler_t *)&SSL_ctrl_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_ctrl\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_set_ex_data", (handler_t *)&SSL_set_ex_data_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_set_ex_data\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_set_verify", (handler_t *)&SSL_set_verify_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_set_verify\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_use_PrivateKey", (handler_t *)&SSL_use_PrivateKey_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_use_PrivateKey\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_use_PrivateKey_file", (handler_t *)&SSL_use_PrivateKey_file_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_use_PrivateKey_file\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_use_certificate_file", (handler_t *)&SSL_use_certificate_file_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_use_certificate_file\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_CTX_new", (handler_t *)&SSL_CTX_new_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_CTX_new\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_CTX_free", (handler_t *)&SSL_CTX_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_CTX_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_CTX_set_default_verify_paths", (handler_t *)&SSL_CTX_set_default_verify_paths_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_CTX_set_default_verify_paths\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_CTX_load_verify_locations", (handler_t *)&SSL_CTX_load_verify_locations_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_CTX_load_verify_locations\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_CTX_set_verify", (handler_t *)&SSL_CTX_set_verify_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_CTX_set_verify\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_CTX_set_verify_depth", (handler_t *)&SSL_CTX_set_verify_depth_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_CTX_set_verify_depth\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_CTX_get_cert_store", (handler_t *)&SSL_CTX_get_cert_store_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_CTX_get_cert_store\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_CTX_check_private_key", (handler_t *)&SSL_CTX_check_private_key_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_CTX_check_private_key\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_CTX_ctrl", (handler_t *)&SSL_CTX_ctrl_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_CTX_ctrl\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_CTX_set_cipher_list", (handler_t *)&SSL_CTX_set_cipher_list_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_CTX_set_cipher_list\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_CTX_set_session_id_context", (handler_t *)&SSL_CTX_set_session_id_context_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_CTX_set_session_id_context\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_CTX_set_options", (handler_t *)&SSL_CTX_set_options_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_CTX_set_options\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_CTX_use_certificate_file", (handler_t *)&SSL_CTX_use_certificate_file_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_CTX_use_certificate_file\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_CTX_use_PrivateKey_file", (handler_t *)&SSL_CTX_use_PrivateKey_file_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_CTX_use_PrivateKey_file\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_CTX_use_certificate_chain_file", (handler_t *)&SSL_CTX_use_certificate_chain_file_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_CTX_use_certificate_chain_file\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_CIPHER_get_name", (handler_t *)&SSL_CIPHER_get_name_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_CIPHER_get_name\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "SSL_SESSION_set_timeout", (handler_t *)&SSL_SESSION_set_timeout_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: SSL_SESSION_set_timeout\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "TLS_method", (handler_t *)&TLS_method_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: TLS_method\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "TLSv1_client_method", (handler_t *)&TLSv1_client_method_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: TLSv1_client_method\n");
#endif
goto err; 
}
  if (!module_resolve(module_ssl, SYMBOL_PREFIX "TLSv1_server_method", (handler_t *)&TLSv1_server_method_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: TLSv1_server_method\n");
#endif
goto err; 
}

  return 1;

err:
  if (module_ssl != NULL)
    module_unload(module_ssl);

  return 0;
}

int initialise_weak_link_ssl(void)
{
#if defined(_LINUX)
  if(!initialise_weak_link_ssl_with_path("./revsecurity"))
#else
  if (!initialise_weak_link_ssl_with_path(MODULE_SSL_NAME))
#endif
{
#ifdef _DEBUG
    MCLog( "Warning: could not load library: ./revsecurity\n");
#endif
return 0;
}
return -1;
}

#if defined(_LINUX)
void initialise_required_weak_link_ssl(void)
{
  if (!initialise_weak_link_ssl())
  {
    failed_required_link("ssl", "./revsecurity");
  }
}
#endif

int OPENSSL_init_ssl(long long int pArg0, void *pArg1)
{
  return OPENSSL_init_ssl_ptr(pArg0, pArg1);
}

void *SSL_new(void *pArg0)
{
  return SSL_new_ptr(pArg0);
}

void SSL_free(void *pArg0)
{
  SSL_free_ptr(pArg0);
}

int SSL_accept(void *pArg0)
{
  return SSL_accept_ptr(pArg0);
}

int SSL_connect(void *pArg0)
{
  return SSL_connect_ptr(pArg0);
}

int SSL_read(void *pArg0, void *pArg1, int pArg2)
{
  return SSL_read_ptr(pArg0, pArg1, pArg2);
}

int SSL_write(void *pArg0, void *pArg1, int pArg2)
{
  return SSL_write_ptr(pArg0, pArg1, pArg2);
}

int SSL_get_error(void *pArg0, int pArg1)
{
  return SSL_get_error_ptr(pArg0, pArg1);
}

int SSL_clear(void *pArg0)
{
  return SSL_clear_ptr(pArg0);
}

int SSL_set_fd(void *pArg0, int pArg1)
{
  return SSL_set_fd_ptr(pArg0, pArg1);
}

int SSL_shutdown(void *pArg0)
{
  return SSL_shutdown_ptr(pArg0);
}

void SSL_set_connect_state(void *pArg0)
{
  SSL_set_connect_state_ptr(pArg0);
}

void SSL_set_accept_state(void *pArg0)
{
  SSL_set_accept_state_ptr(pArg0);
}

void *SSL_get_peer_certificate(void *pArg0)
{
  return SSL_get_peer_certificate_ptr(pArg0);
}

void *SSL_get1_peer_certificate(void *pArg0)
{
  return SSL_get1_peer_certificate_ptr(pArg0);
}

int SSL_get_verify_result(void *pArg0)
{
  return SSL_get_verify_result_ptr(pArg0);
}

void *SSL_get_peer_cert_chain(void *pArg0)
{
  return SSL_get_peer_cert_chain_ptr(pArg0);
}

void *SSL_get_current_cipher(void *pArg0)
{
  return SSL_get_current_cipher_ptr(pArg0);
}

int SSL_get_fd(void *pArg0)
{
  return SSL_get_fd_ptr(pArg0);
}

void *SSL_get_session(void *pArg0)
{
  return SSL_get_session_ptr(pArg0);
}

void *SSL_get_shared_ciphers(void *pArg0, void *pArg1, int pArg2)
{
  return SSL_get_shared_ciphers_ptr(pArg0, pArg1, pArg2);
}

int SSL_pending(void *pArg0)
{
  return SSL_pending_ptr(pArg0);
}

void SSL_set_quiet_shutdown(void *pArg0, int pArg1)
{
  SSL_set_quiet_shutdown_ptr(pArg0, pArg1);
}

int SSL_set_options(void *pArg0, int pArg1)
{
  return SSL_set_options_ptr(pArg0, pArg1);
}

int SSL_check_private_key(void *pArg0)
{
  return SSL_check_private_key_ptr(pArg0);
}

int SSL_ctrl(void *pArg0, int pArg1, int pArg2, void *pArg3)
{
  return SSL_ctrl_ptr(pArg0, pArg1, pArg2, pArg3);
}

int SSL_set_ex_data(void *pArg0, int pArg1, void *pArg2)
{
  return SSL_set_ex_data_ptr(pArg0, pArg1, pArg2);
}

void SSL_set_verify(void *pArg0, int pArg1, void *pArg2)
{
  SSL_set_verify_ptr(pArg0, pArg1, pArg2);
}

int SSL_use_PrivateKey(void *pArg0, void *pArg1)
{
  return SSL_use_PrivateKey_ptr(pArg0, pArg1);
}

int SSL_use_PrivateKey_file(void *pArg0, void *pArg1, int pArg2)
{
  return SSL_use_PrivateKey_file_ptr(pArg0, pArg1, pArg2);
}

int SSL_use_certificate_file(void *pArg0, void *pArg1, int pArg2)
{
  return SSL_use_certificate_file_ptr(pArg0, pArg1, pArg2);
}

void *SSL_CTX_new(void *pArg0)
{
  return SSL_CTX_new_ptr(pArg0);
}

void SSL_CTX_free(void *pArg0)
{
  SSL_CTX_free_ptr(pArg0);
}

int SSL_CTX_set_default_verify_paths(void *pArg0)
{
  return SSL_CTX_set_default_verify_paths_ptr(pArg0);
}

int SSL_CTX_load_verify_locations(void *pArg0, void *pArg1, void *pArg2)
{
  return SSL_CTX_load_verify_locations_ptr(pArg0, pArg1, pArg2);
}

void SSL_CTX_set_verify(void *pArg0, int pArg1, void *pArg2)
{
  SSL_CTX_set_verify_ptr(pArg0, pArg1, pArg2);
}

void SSL_CTX_set_verify_depth(void *pArg0, int pArg1)
{
  SSL_CTX_set_verify_depth_ptr(pArg0, pArg1);
}

void *SSL_CTX_get_cert_store(void *pArg0)
{
  return SSL_CTX_get_cert_store_ptr(pArg0);
}

int SSL_CTX_check_private_key(void *pArg0)
{
  return SSL_CTX_check_private_key_ptr(pArg0);
}

int SSL_CTX_ctrl(void *pArg0, int pArg1, int pArg2, void *pArg3)
{
  return SSL_CTX_ctrl_ptr(pArg0, pArg1, pArg2, pArg3);
}

int SSL_CTX_set_cipher_list(void *pArg0, void *pArg1)
{
  return SSL_CTX_set_cipher_list_ptr(pArg0, pArg1);
}

int SSL_CTX_set_session_id_context(void *pArg0, void *pArg1, int pArg2)
{
  return SSL_CTX_set_session_id_context_ptr(pArg0, pArg1, pArg2);
}

int SSL_CTX_set_options(void *pArg0, int pArg1)
{
  return SSL_CTX_set_options_ptr(pArg0, pArg1);
}

int SSL_CTX_use_certificate_file(void *pArg0, void *pArg1, int pArg2)
{
  return SSL_CTX_use_certificate_file_ptr(pArg0, pArg1, pArg2);
}

int SSL_CTX_use_PrivateKey_file(void *pArg0, void *pArg1, int pArg2)
{
  return SSL_CTX_use_PrivateKey_file_ptr(pArg0, pArg1, pArg2);
}

int SSL_CTX_use_certificate_chain_file(void *pArg0, void *pArg1)
{
  return SSL_CTX_use_certificate_chain_file_ptr(pArg0, pArg1);
}

void *SSL_CIPHER_get_name(void *pArg0)
{
  return SSL_CIPHER_get_name_ptr(pArg0);
}

int SSL_SESSION_set_timeout(void *pArg0, int pArg1)
{
  return SSL_SESSION_set_timeout_ptr(pArg0, pArg1);
}

void *TLS_method(void)
{
  return TLS_method_ptr();
}

void *TLSv1_client_method(void)
{
  return TLSv1_client_method_ptr();
}

void *TLSv1_server_method(void)
{
  return TLSv1_server_method_ptr();
}

}
