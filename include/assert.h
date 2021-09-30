#ifndef _ASSERT_H_
#define _ASSERT_H_

#ifdef NDEBUG
#define assert(ignore)((void) 0)
#else
extern void abort(void);
extern int printf(const char * format, ...);
#define assert(expr) do { if (!(expr)) { printf("assert failed: %s", #expr); abort(); } } while (0);
#endif

#endif
