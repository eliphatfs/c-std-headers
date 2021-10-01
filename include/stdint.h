#ifndef _STDINT_H_
#define _STDINT_H_

/* This is based on common definitions of integers */
typedef char int8_t;
typedef short int16_t;
#if defined(__APPLE__) && defined(__MACH__)
typedef int int32_t;
#else
typedef long int32_t;
#endif
typedef long long int64_t;

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
#if defined(__APPLE__) && defined(__MACH__)
typedef unsigned int uint32_t;
#else
typedef unsigned long uint32_t;
#endif
typedef unsigned long long uint64_t;

#endif
