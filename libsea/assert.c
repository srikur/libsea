#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#if __STDC_VERSION__ >= 202311L
[[noreturn]] __assert_fail(const char* expression, const char* filename, unsigned int lineNumber) {
    printf("Assertion failed: %s -- file %s -- line number %d", expression, filename, lineNumber);
    abort();
}
#else
void __assert_fail(const char* expression, const char* filename, unsigned int lineNumber) {
    printf("Assertion failed: %s -- file %s -- line number %d", expression, filename, lineNumber);
    abort();
}
#endif
