#ifndef _ASSERT_H
#define _ASSERT_H

#if __STDC_VERSION__ >= 202311L
#define __STDC_VERSION_ASSERT_H__ 202311L
#ifdef NDEBUG
    #define assert(...) ((void)0)
#else
    extern [[noreturn]] __assert_fail(const char*, const char*, unsigned int);
    #define assert(...) \
        ((__VA_ARGS__) ? (void)0 : __assert_fail(#__VA_ARGS__, __FILE__, __LINE__))
#endif
#else
#ifdef NDEBUG
    #define assert(...) ((void)0)
#else
    extern void __assert_fail(const char*, const char*, unsigned int);
    #define assert(...) \
        ((__VA_ARGS__) ? (void)0 : __assert_fail(#__VA_ARGS__, __FILE__, __LINE__))
#endif

#endif
#endif

