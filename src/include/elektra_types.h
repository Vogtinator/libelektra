#ifndef ELEKTRA_TYPES_H
#define ELEKTRA_TYPES_H

#include "kdbtypes.h"

typedef const char * KDBType;

extern KDBType KDB_TYPE_STRING;
extern KDBType KDB_TYPE_BOOLEAN;
extern KDBType KDB_TYPE_CHAR;
extern KDBType KDB_TYPE_OCTET;
extern KDBType KDB_TYPE_SHORT;
extern KDBType KDB_TYPE_UNSIGNED_SHORT;
extern KDBType KDB_TYPE_LONG;
extern KDBType KDB_TYPE_UNSIGNED_LONG;
extern KDBType KDB_TYPE_LONG_LONG;
extern KDBType KDB_TYPE_UNSIGNED_LONG_LONG;
extern KDBType KDB_TYPE_FLOAT;
extern KDBType KDB_TYPE_DOUBLE;

#ifdef HAVE_SIZEOF_LONG_DOUBLE
extern KDBType KDB_TYPE_LONG_DOUBLE;
#endif

extern KDBType KDB_TYPE_ENUM;

#endif // ELEKTRA_TYPES_H
