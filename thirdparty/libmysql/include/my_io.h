/* Copyright (c) 2016, 2023, Oracle and/or its affiliates.

   Stub for building HyperXTalk's MySQL client driver against brew mysql-client
   headers.  The full file ships with the MySQL server package only.

   Defines net_async_status (used by the non-blocking API declared in mysql.h)
   and my_socket (via my_io_bits.h).
*/

#ifndef MY_IO_H
#define MY_IO_H

#include "mysql/components/services/bits/my_io_bits.h"

/* net_async_status is defined in mysql/plugin_auth_common.h, which is
   always included downstream via mysql/client_plugin.h → mysql.h.
   Do not define it here to avoid redefinition errors. */

#endif /* MY_IO_H */
