/* Copyright (c) 2010, 2023, Oracle and/or its affiliates.

   Stub for building HyperXTalk's MySQL client driver against brew mysql-client
   headers.  The full file ships with the MySQL server package only.
   Content matches the MySQL 8.x public client plugin API.
*/

#ifndef MYSQL_CLIENT_PLUGIN_H
#define MYSQL_CLIENT_PLUGIN_H

#include <stdarg.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Plugin type identifiers */
#define MYSQL_CLIENT_AUTHENTICATION_PLUGIN            0
#define MYSQL_CLIENT_AUTHENTICATION_PLUGIN_INTERFACE_VERSION 0x0100
#define MYSQL_CLIENT_TRACE_PLUGIN                     1
#define MYSQL_CLIENT_TRACE_PLUGIN_INTERFACE_VERSION   0x0100
#define MYSQL_CLIENT_MAX_PLUGINS                      2

/* Common header fields shared by all client plugin descriptors */
#define MYSQL_CLIENT_PLUGIN_HEADER                      \
  int type;                                             \
  unsigned int interface_version;                       \
  const char *name;                                     \
  const char *author;                                   \
  const char *desc;                                     \
  unsigned int version[3];                              \
  const char *license;                                  \
  void *mysql_api;                                      \
  int (*init)(char *, size_t, int, va_list);            \
  int (*deinit)(void);                                  \
  int (*options)(const char *option, const void *);     \
  int (*get_options)(const char *option, void *);

struct st_mysql_client_plugin {
  MYSQL_CLIENT_PLUGIN_HEADER
};

/* Forward-declare MYSQL_PLUGIN_VIO so function pointers can reference it */
typedef struct MYSQL_PLUGIN_VIO MYSQL_PLUGIN_VIO;

struct MYSQL_PLUGIN_VIO_INFO {
  enum {
    MYSQL_VIO_INVALID,
    MYSQL_VIO_TCP,
    MYSQL_VIO_SOCKET,
    MYSQL_VIO_PIPE,
    MYSQL_VIO_MEMORY
  } protocol;
  int socket;
};

struct MYSQL_PLUGIN_VIO {
  int (*read_packet)(MYSQL_PLUGIN_VIO *vio, unsigned char **buf);
  int (*write_packet)(MYSQL_PLUGIN_VIO *vio, const unsigned char *pkt,
                      int pkt_len);
  void (*info)(MYSQL_PLUGIN_VIO *vio, struct MYSQL_PLUGIN_VIO_INFO *info);
};

struct MYSQL;

/* Authentication plugin descriptor */
struct st_mysql_client_plugin_AUTHENTICATION {
  MYSQL_CLIENT_PLUGIN_HEADER
  int (*authenticate_user)(MYSQL_PLUGIN_VIO *vio, struct MYSQL *mysql);
};

typedef struct st_mysql_client_plugin         st_mysql_client_plugin;
typedef struct st_mysql_client_plugin_AUTHENTICATION
    st_mysql_client_plugin_AUTHENTICATION;

#ifdef __cplusplus
}
#endif

#endif /* MYSQL_CLIENT_PLUGIN_H */
