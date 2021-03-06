#ifndef _STDLIB_H_
#define _STDLIB_H_

#include <stddef.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

typedef struct { int quot, rem; } div_t;
typedef struct { long quot, rem; } ldiv_t;
typedef struct { long long quot, rem; } lldiv_t;
extern double atof(const char *nptr);
extern int atoi(const char *nptr);
extern long int atol(const char *nptr);
extern long long int atoll(const char *nptr);
extern double strtod(const char * nptr, char ** endptr);
extern float strtof(const char * nptr, char ** endptr);
extern long double strtold(const char * nptr, char ** endptr);
extern long int strtol(const char * nptr, char ** endptr, int base);
extern long long int strtoll(const char * nptr, char ** endptr, int base);
extern unsigned long int strtoul(const char * nptr, char ** endptr, int base);
extern unsigned long long int strtoull(const char * nptr, char ** endptr, int base);
extern int rand(void);
extern void srand(unsigned int seed);
extern void *calloc(size_t nmemb, size_t size);
extern void free(void *ptr);
extern void *malloc(size_t size);
extern void *realloc(void *ptr, size_t size);
extern void abort(void);
extern int atexit(void (*func)(void));
extern void exit(int status);
extern void _Exit(int status);
extern char *getenv(const char *name);
extern int system(const char *string);
extern void *bsearch(const void *key, const void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));
extern void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));
extern int abs(int j);
extern long int labs(long int j);
extern long long int llabs(long long int j);
extern div_t div(int numer, int denom);
extern ldiv_t ldiv(long int numer, long int denom);
extern lldiv_t lldiv(long long int numer, long long int denom);
extern int mblen(const char *s, size_t n);
/* extern int mbtowc(wchar_t * pwc, const char * s, size_t n);
extern int wctomb(char *s, wchar_t wchar);
extern size_t mbstowcs(wchar_t * pwcs, const char * s, size_t n);
extern size_t wcstombs(char * s, const wchar_t * pwcs, size_t n); */

#endif
