/* Copyright (C) 2000 MySQL AB

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA */

#include "vio_priv.h"

#ifdef HAVE_OPENSSL

static my_bool     ssl_algorithms_added    = FALSE;
static my_bool     ssl_error_strings_loaded= FALSE;
static int      verify_depth = 0;

/* get_dh512 and its static data removed: OpenSSL 3.x handles ephemeral
   DH parameters internally via SSL_CTX_set_dh_auto(). */


static void
report_errors()
{
  unsigned long	l;
  const char*	file;
  const char*	data;
  int		line,flags;

  DBUG_ENTER("report_errors");

  while ((l=ERR_get_error_line_data(&file,&line,&data,&flags)) != 0)
  {
#ifndef DBUG_OFF				/* Avoid warning */
    char buf[200];
    DBUG_PRINT("error", ("OpenSSL: %s:%s:%d:%s\n", ERR_error_string(l,buf),
			 file,line,(flags & ERR_TXT_STRING) ? data : "")) ;
#endif
  }
  DBUG_VOID_RETURN;
}


static int
vio_set_cert_stuff(SSL_CTX *ctx, const char *cert_file, const char *key_file)
{
  DBUG_ENTER("vio_set_cert_stuff");
  DBUG_PRINT("enter", ("ctx: %p  cert_file: %s  key_file: %s",
		       ctx, cert_file, key_file));
  if (cert_file)
  {
    if (SSL_CTX_use_certificate_file(ctx, cert_file, SSL_FILETYPE_PEM) <= 0)
    {
      DBUG_PRINT("error",("unable to get certificate from '%s'", cert_file));
      DBUG_EXECUTE("error", ERR_print_errors_fp(DBUG_FILE););
      fprintf(stderr, "SSL error: Unable to get certificate from '%s'\n",
              cert_file);
      fflush(stderr);
      DBUG_RETURN(1);
    }

    if (!key_file)
      key_file= cert_file;

    if (SSL_CTX_use_PrivateKey_file(ctx, key_file, SSL_FILETYPE_PEM) <= 0)
    {
      DBUG_PRINT("error", ("unable to get private key from '%s'", key_file));
      DBUG_EXECUTE("error", ERR_print_errors_fp(DBUG_FILE););
      fprintf(stderr, "SSL error: Unable to get private key from '%s'\n",
              key_file);
      fflush(stderr);
      DBUG_RETURN(1);
    }

    /*
      If we are using DSA, we can copy the parameters from the private key
      Now we know that a key and cert have been set against the SSL context
    */
    if (!SSL_CTX_check_private_key(ctx))
    {
      DBUG_PRINT("error",
		 ("Private key does not match the certificate public key"));
      DBUG_EXECUTE("error", ERR_print_errors_fp(DBUG_FILE););
      fprintf(stderr,
              "SSL error: "
              "Private key does not match the certificate public key\n");
      fflush(stderr);
      DBUG_RETURN(1);
    }
  }
  DBUG_RETURN(0);
}


static int
vio_verify_callback(int ok, X509_STORE_CTX *ctx)
{
  char buf[256];
  X509 *err_cert;

  DBUG_ENTER("vio_verify_callback");
  DBUG_PRINT("enter", ("ok: %d  ctx: %p", ok, ctx));

  err_cert= X509_STORE_CTX_get_current_cert(ctx);
  X509_NAME_oneline(X509_get_subject_name(err_cert), buf, sizeof(buf));
  DBUG_PRINT("info", ("cert: %s", buf));
  if (!ok)
  {
    int err, depth;
    err= X509_STORE_CTX_get_error(ctx);
    depth= X509_STORE_CTX_get_error_depth(ctx);

    DBUG_PRINT("error",("verify error: %d  '%s'",err,
			X509_verify_cert_error_string(err)));
    /*
      Approve cert if depth is greater then "verify_depth", currently
      verify_depth is always 0 and there is no way to increase it.
     */
    if (verify_depth >= depth)
      ok= 1;
  }
  switch (X509_STORE_CTX_get_error(ctx))
  {
  case X509_V_ERR_UNABLE_TO_GET_ISSUER_CERT:
    X509_NAME_oneline(X509_get_issuer_name(X509_STORE_CTX_get_current_cert(ctx)), buf, 256);
    DBUG_PRINT("info",("issuer= %s\n", buf));
    break;
  case X509_V_ERR_CERT_NOT_YET_VALID:
  case X509_V_ERR_ERROR_IN_CERT_NOT_BEFORE_FIELD:
    DBUG_PRINT("error", ("notBefore"));
    /*ASN1_TIME_print_fp(stderr,X509_get_notBefore(ctx->current_cert));*/
    break;
  case X509_V_ERR_CERT_HAS_EXPIRED:
  case X509_V_ERR_ERROR_IN_CERT_NOT_AFTER_FIELD:
    DBUG_PRINT("error", ("notAfter error"));
    /*ASN1_TIME_print_fp(stderr,X509_get_notAfter(ctx->current_cert));*/
    break;
  }
  DBUG_PRINT("exit", ("%d", ok));
  DBUG_RETURN(ok);
}


#ifdef __NETWARE__

/* NetWare SSL cleanup */
void netware_ssl_cleanup()
{
  /* free memory from SSL_library_init() */
  EVP_cleanup();

/* OpenSSL NetWare port specific functions */
#ifndef HAVE_YASSL

  /* free global X509 method */
  X509_STORE_method_cleanup();

  /* free the thread_hash error table */
  ERR_free_state_table();
#endif
}


/* NetWare SSL initialization */
static void netware_ssl_init()
{
  /* cleanup OpenSSL library */
  NXVmRegisterExitHandler(netware_ssl_cleanup, NULL);
}

#endif /* __NETWARE__ */


static void check_ssl_init()
{
  if (!ssl_algorithms_added)
  {
    ssl_algorithms_added= TRUE;
    SSL_library_init();
    OpenSSL_add_all_algorithms();

  }

#ifdef __NETWARE__
  netware_ssl_init();
#endif

  if (!ssl_error_strings_loaded)
  {
    ssl_error_strings_loaded= TRUE;
    SSL_load_error_strings();
  }
}

#ifndef EMBEDDED_LIBRARY
/************************ VioSSLFd **********************************/
static struct st_VioSSLFd *
new_VioSSLFd(const char *key_file, const char *cert_file,
             const char *ca_file, const char *ca_path,
             const char *cipher, const SSL_METHOD *method)
{
  struct st_VioSSLFd *ssl_fd;
  DBUG_ENTER("new_VioSSLFd");
  DBUG_PRINT("enter",
             ("key_file: '%s'  cert_file: '%s'  ca_file: '%s'  ca_path: '%s'  "
              "cipher: '%s'",
              key_file ? key_file : "NULL",
              cert_file ? cert_file : "NULL",
              ca_file ? ca_file : "NULL",
              ca_path ? ca_path : "NULL",
              cipher ? cipher : "NULL"));

  check_ssl_init();

  if (!(ssl_fd= ((struct st_VioSSLFd*)
                 my_malloc(sizeof(struct st_VioSSLFd),MYF(0)))))
    DBUG_RETURN(0);

  if (!(ssl_fd->ssl_context= SSL_CTX_new(method)))
  {
    DBUG_PRINT("error", ("SSL_CTX_new failed"));
    report_errors();
    my_free((void*)ssl_fd,MYF(0));
    DBUG_RETURN(0);
  }

  /*
    Set the ciphers that can be used
    NOTE: SSL_CTX_set_cipher_list will return 0 if
    none of the provided ciphers could be selected
  */
  if (cipher &&
      SSL_CTX_set_cipher_list(ssl_fd->ssl_context, cipher) == 0)
  {
    DBUG_PRINT("error", ("failed to set ciphers to use"));
    report_errors();
    SSL_CTX_free(ssl_fd->ssl_context);
    my_free((void*)ssl_fd,MYF(0));
    DBUG_RETURN(0);
  }

  /* Load certs from the trusted ca */
  if (ca_file != NULL || ca_path != NULL)
  {
    /* CA explicitly specified — must load successfully */
    if (SSL_CTX_load_verify_locations(ssl_fd->ssl_context, ca_file, ca_path) == 0)
    {
      DBUG_PRINT("error", ("SSL_CTX_load_verify_locations failed"));
      report_errors();
      SSL_CTX_free(ssl_fd->ssl_context);
      my_free((void*)ssl_fd,MYF(0));
      DBUG_RETURN(0);
    }
  }
  else
  {
    /* No CA specified — try system defaults but don't fail if unavailable
       (macOS uses the Keychain, not OpenSSL's standard paths).
       Verification mode will be SSL_VERIFY_NONE in this case anyway. */
    SSL_CTX_set_default_verify_paths(ssl_fd->ssl_context);
  }

  if (vio_set_cert_stuff(ssl_fd->ssl_context, cert_file, key_file))
  {
    DBUG_PRINT("error", ("vio_set_cert_stuff failed"));
    report_errors();
    SSL_CTX_free(ssl_fd->ssl_context);
    my_free((void*)ssl_fd,MYF(0));
    DBUG_RETURN(0);
  }

  /* DH stuff: let OpenSSL 3.x choose ephemeral DH parameters automatically */
  SSL_CTX_set_dh_auto(ssl_fd->ssl_context, 1);

  DBUG_PRINT("exit", ("OK 1"));

  DBUG_RETURN(ssl_fd);
}


/************************ VioSSLConnectorFd **********************************/
struct st_VioSSLFd *
new_VioSSLConnectorFd(const char *key_file, const char *cert_file,
                      const char *ca_file, const char *ca_path,
                      const char *cipher)
{
  struct st_VioSSLFd *ssl_fd;
  int verify= SSL_VERIFY_PEER;

  /*
    Turn off verification of servers certificate if both
    ca_file and ca_path is set to NULL
  */
  if (ca_file == 0 && ca_path == 0)
    verify= SSL_VERIFY_NONE;

  if (!(ssl_fd= new_VioSSLFd(key_file, cert_file, ca_file,
                             ca_path, cipher, TLS_client_method())))
  {
    return 0;
  }

  /* Init the VioSSLFd as a "connector" ie. the client side */

  /*
    The verify_callback function is used to control the behaviour
    when the SSL_VERIFY_PEER flag is set.
  */
  SSL_CTX_set_verify(ssl_fd->ssl_context, verify, vio_verify_callback);

  return ssl_fd;
}


/************************ VioSSLAcceptorFd **********************************/
struct st_VioSSLFd *
new_VioSSLAcceptorFd(const char *key_file, const char *cert_file,
		     const char *ca_file, const char *ca_path,
		     const char *cipher)
{
  struct st_VioSSLFd *ssl_fd;
  int verify= SSL_VERIFY_PEER | SSL_VERIFY_CLIENT_ONCE;
  if (!(ssl_fd= new_VioSSLFd(key_file, cert_file, ca_file,
                             ca_path, cipher, TLS_server_method())))
  {
    return 0;
  }
  /* Init the the VioSSLFd as a "acceptor" ie. the server side */

  /* Set max number of cached sessions, returns the previous size */
  SSL_CTX_sess_set_cache_size(ssl_fd->ssl_context, 128);

  /*
    The verify_callback function is used to control the behaviour
    when the SSL_VERIFY_PEER flag is set.
  */
  SSL_CTX_set_verify(ssl_fd->ssl_context, verify, vio_verify_callback);

  /*
    Set session_id - an identifier for this server session
    Use the ssl_fd pointer
   */
  SSL_CTX_set_session_id_context(ssl_fd->ssl_context,
				 (const unsigned char *)ssl_fd,
				 sizeof(ssl_fd));

  return ssl_fd;
}

void free_vio_ssl_acceptor_fd(struct st_VioSSLFd *fd)
{
  SSL_CTX_free(fd->ssl_context);
  my_free((uchar*) fd, MYF(0));
}
#endif /*EMBEDDED_LIBRARY*/
#endif /* HAVE_OPENSSL */
