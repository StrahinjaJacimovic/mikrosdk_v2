#ifndef _STDDEF_H
#define _STDDEF_H

/* type of the result of subtracting two pointers */
typedef int ptrdiff_t;
typedef int ptrdiffram_t;
typedef long int ptrdiffrom_t;

/* type of the result of the sizeof operator */
typedef unsigned int size_t;
typedef unsigned int sizeram_t;
typedef unsigned long int sizerom_t;

/* wide char type */
typedef unsigned char wchar_t;

/* Offset of member MEMBER in a struct of type TYPE. */
#define offsetof(TYPE, MEMBER) ((size_t)(&(((TYPE *)(void *)0)->MEMBER)))

#ifndef NULL
#define NULL ((void *)0)
#endif

#endif