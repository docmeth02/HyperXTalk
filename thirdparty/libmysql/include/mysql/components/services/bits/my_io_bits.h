/* Copyright (c) 2019, 2023, Oracle and/or its affiliates.

   This file is a stub for building HyperXTalk's MySQL client driver against
   the brew mysql-client headers.  Defines my_socket and related constants,
   which are used in the NET struct (mysql_com.h line ~919).
*/

#ifndef MYSQL_COMPONENTS_SERVICES_BITS_MY_IO_BITS_H
#define MYSQL_COMPONENTS_SERVICES_BITS_MY_IO_BITS_H

#ifdef _WIN32
#include <winsock2.h>
typedef SOCKET my_socket;
#ifndef INVALID_SOCKET
#define INVALID_SOCKET ((SOCKET)(~0))
#endif
#define socket_errno    WSAGetLastError()
#define SOCKET_EINTR    WSAEINTR
#define SOCKET_EAGAIN   WSAEINPROGRESS
#define SOCKET_EWOULDBLOCK WSAEWOULDBLOCK
#define SOCKET_EADDRINUSE  WSAEADDRINUSE
#define SOCKET_ETIMEDOUT   WSAETIMEDOUT
#define SOCKET_ECONNRESET  WSAECONNRESET
#else
#include <errno.h>
typedef int my_socket;
#define INVALID_SOCKET  (-1)
#define socket_errno    errno
#define SOCKET_EINTR    EINTR
#define SOCKET_EAGAIN   EAGAIN
#define SOCKET_EWOULDBLOCK EWOULDBLOCK
#define SOCKET_EADDRINUSE  EADDRINUSE
#define SOCKET_ETIMEDOUT   ETIMEDOUT
#define SOCKET_ECONNRESET  ECONNRESET
#endif

#define my_socket_defined

#endif /* MYSQL_COMPONENTS_SERVICES_BITS_MY_IO_BITS_H */
