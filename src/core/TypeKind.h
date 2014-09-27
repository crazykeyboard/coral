#ifndef _CO_TYPEKIND_H_
#define _CO_TYPEKIND_H_

#include <cstdint>

namespace co {

enum TypeKind {
  TK_NULL,
  TK_BOOL,
  TK_INT8,
  TK_INT16,
  TK_INT32,
  TK_INT64,
  TK_DOUBLE,
  TK_ENUM,
  TK_STRING,
  TK_ANY,
  TK_ARRAY,
  TK_STRUCT,
  TK_NATIVECLASS,
  TK_INTERFACE,
  TK_COMPONENT,
  TK_EXCEPTION,
  TK_COUNT,
  TK__FORCE_SIZEOF_INT32 = INT32_MAX
};

}  // namespace co

#endif  // _CO_TYPEKIND_H_
