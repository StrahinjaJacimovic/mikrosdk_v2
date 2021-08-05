/*
    Assertion failed case is left to the user specific needs.
*/

#undef assert
#undef __assert

#ifdef NDEBUG
#define assert(ignore) ((void)0)
#else
#define assert(e) ((e) ? (void)0 : __assert(#e, __FILE__, __LINE__))
#define __assert(e, file, line) (1 /*implement assertion failed case*/)
#endif