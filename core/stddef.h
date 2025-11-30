#ifndef _STDDEF_H
#define _STDDEF_H

#ifndef __SIZE_TYPE__
#define __SIZE_TYPE__ unsigned long int
#endif

#define _SIZE_T
typedef __SIZE_TYPE__ size_t;

#ifndef __PTRDIFF_TYPE__
#define __PTRDIFF_TYPE__ long int;
#endif

#define _PTRDIFF_T
typedef __PTRDIFF_TYPE__ ptrdiff_t;

#undef NULL
#ifdef _cplusplus
#define NULL 0
#elif __STDC_VERSION__ >= 202311L
#define NULL nullptr
#else
#define NULL ((void*)0)
#endif

#define offsetof(type, member) ((size_t) &(((type*)0)->member))

#endif
