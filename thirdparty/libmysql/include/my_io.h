/* Copyright (c) 2016, 2023, Oracle and/or its affiliates.

   Stub for building HyperXTalk's MySQL client driver against brew mysql-client
   headers.  The full file ships with the MySQL server package only.

   Defines net_async_status (used by the non-blocking API declared in mysql.h)
   and my_socket (via my_io_bits.h).
*/

#ifndef MY_IO_H
#define MY_IO_H

#include "mysql/components/services/bits/my_io_bits.h"

/**
  Return type for the non-blocking MySQL client API functions
  (mysql_real_connect_nonblocking, mysql_real_query_nonblocking, etc.)
*/
enum net_async_status {
  NET_ASYNC_COMPLETE = 0,       /**< Operation finished successfully */
  NET_ASYNC_NOT_READY,          /**< Still in progress — call again */
  NET_ASYNC_ERROR,              /**< Operation failed */
  NET_ASYNC_COMPLETE_NO_MORE_RESULTS /**< Complete; no more result sets */
};

#endif /* MY_IO_H */
