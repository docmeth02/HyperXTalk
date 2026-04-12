/* Copyright (c) 2016, 2023, Oracle and/or its affiliates.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License, version 2.0,
   as published by the Free Software Foundation.

   This file is included by mysql_com.h "so existing UDFs can keep compiling."
   The mysql-client Homebrew formula does not ship this server-side header, so
   we maintain a copy here with the canonical content from MySQL 8.x source.
*/

#ifndef UDF_REGISTRATION_TYPES_H
#define UDF_REGISTRATION_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

/**
  Item_result — the type of a UDF argument or return value.
*/
enum Item_result {
  INVALID_RESULT = -1, /**< not valid for UDFs */
  STRING_RESULT = 0,   /**< char * */
  REAL_RESULT,         /**< double */
  INT_RESULT,          /**< long long */
  ROW_RESULT,          /**< not valid for UDFs */
  DECIMAL_RESULT       /**< char *, converted to/from a decimal */
};

typedef struct UDF_ARGS {
  unsigned int arg_count;               /**< Number of arguments */
  enum Item_result *arg_type;           /**< Pointer to item_result */
  char **args;                          /**< Pointer to argument */
  unsigned long *lengths;               /**< Length of string arguments */
  char *maybe_null;                     /**< Set to 1 for all maybe_null args */
  char **attributes;                    /**< Pointer to attribute name */
  unsigned long *attribute_lengths;     /**< Length of attribute arguments */
  void *extension;
} UDF_ARGS;

typedef struct UDF_INIT {
  bool maybe_null;          /**< 1 if function can return NULL */
  unsigned int decimals;    /**< For real functions */
  unsigned long max_length; /**< For string functions */
  char *ptr;                /**< Free pointer for function data */
  bool const_item;          /**< 1 if function always returns the same value */
  void *extension;
} UDF_INIT;

enum Item_udftype { UDFTYPE_FUNCTION = 1, UDFTYPE_AGGREGATE };

typedef void (*Udf_func_clear)(UDF_INIT *, unsigned char *, unsigned char *);
typedef void (*Udf_func_add)(UDF_INIT *, UDF_ARGS *, unsigned char *,
                             unsigned char *);
typedef double (*Udf_func_double)(UDF_INIT *, UDF_ARGS *, unsigned char *,
                                  unsigned char *);
typedef long long (*Udf_func_longlong)(UDF_INIT *, UDF_ARGS *, unsigned char *,
                                       unsigned char *);
typedef char *(*Udf_func_string)(UDF_INIT *, UDF_ARGS *, char *,
                                 unsigned long *, unsigned char *,
                                 unsigned char *);
typedef int (*Udf_func_init)(UDF_INIT *, UDF_ARGS *, char *);
typedef void (*Udf_func_deinit)(UDF_INIT *);

#ifdef __cplusplus
}
#endif

#endif /* UDF_REGISTRATION_TYPES_H */
