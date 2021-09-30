/**
 * The stubs in this file is adopted from MinGW.
 */
/*
Original MinGW license

Copyright (c) 2009 - 2013 by the mingw-w64 project

See the AUTHORS file for the list of contributors to the mingw-w64 project.

This license has been certified as open source. It has also been designated
as GPL compatible by the Free Software Foundation (FSF).

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

   1. Redistributions in source code must retain the accompanying copyright
      notice, this list of conditions, and the following disclaimer.
   2. Redistributions in binary form must reproduce the accompanying
      copyright notice, this list of conditions, and the following disclaimer
      in the documentation and/or other materials provided with the
      distribution.
   3. Names of the copyright holders must not be used to endorse or promote
      products derived from this software without prior written permission
      from the copyright holders.
   4. The right to distribute this software or to use it for any purpose does
      not give you the right to use Servicemarks (sm) or Trademarks (tm) of
      the copyright holders.  Use of them is covered by separate agreement
      with the copyright holders.
   5. If any files are modified, you must cause the modified files to carry
      prominent notices stating that you changed the files and the date of
      any change.

Disclaimer

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY EXPRESSED
OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
EVENT SHALL THE COPYRIGHT HOLDERS BE LIABLE FOR ANY DIRECT, INDIRECT,
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
#ifndef _FLOAT_H_
#define _FLOAT_H_

#define FLT_ROUNDS	1
#define FLT_GUARD	1
#define FLT_NORMALIZE	1

/*
 * The characteristics of float.
 */

/* The radix for floating point representation. */
#define FLT_RADIX	2

/* Decimal digits of precision. */
#define FLT_DIG		6

/* Smallest number such that 1+x != 1 */
#define FLT_EPSILON	1.19209290e-07F

/* The number of base FLT_RADIX digits in the mantissa. */
#define FLT_MANT_DIG	24

/* The maximum floating point number. */
#define FLT_MAX		3.40282347e+38F

/* Maximum n such that FLT_RADIX^n - 1 is representable. */
#define FLT_MAX_EXP	128

/* Maximum n such that 10^n is representable. */
#define FLT_MAX_10_EXP	38

/* Minimum normalized floating-point number. */
#define FLT_MIN		1.17549435e-38F

/* Minimum n such that FLT_RADIX^n is a normalized number. */
#define FLT_MIN_EXP	(-125)

/* Minimum n such that 10^n is a normalized number. */
#define FLT_MIN_10_EXP	(-37)


/*
 * The characteristics of double.
 */
#define DBL_DIG		15
#define DBL_EPSILON	1.1102230246251568e-16
#define DBL_MANT_DIG	53
#define DBL_MAX		1.7976931348623157e+308
#define DBL_MAX_EXP	1024
#define DBL_MAX_10_EXP	308
#define DBL_MIN		2.2250738585072014e-308
#define DBL_MIN_EXP	(-1021)
#define DBL_MIN_10_EXP	(-307)


/*
 * The characteristics of long double.
 * NOTE: long double is the same as double.
 */
#define LDBL_DIG	15
#define LDBL_EPSILON	1.1102230246251568e-16L
#define LDBL_MANT_DIG	53
#define LDBL_MAX	1.7976931348623157e+308L
#define LDBL_MAX_EXP	1024
#define LDBL_MAX_10_EXP	308
#define LDBL_MIN	2.2250738585072014e-308L
#define LDBL_MIN_EXP	(-1021)
#define LDBL_MIN_10_EXP	(-307)

#endif
