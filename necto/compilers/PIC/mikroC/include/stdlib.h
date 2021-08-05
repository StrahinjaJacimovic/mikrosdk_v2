/*
    stdlib.h

 ------------------------------------------------------------------------------

  This file is part of mikroSDK.

  Copyright (c) 2020, MikroElektonika - www.mikroe.com

  All rights reserved.

----------------------------------------------------------------------------- */

/**
    \file   stdlib.h
    \brief  Standard C integer arithmetic functions.
    \{

- Version : **1.0.0**
- Date : **27/8/2020**
- Developer : **MikroE Team**

*/
// ----------------------------------------------------------------------------

#ifndef STDLIB_H_
#define STDLIB_H_

#ifdef __cplusplus
extern "C"{
#endif

#include <stdint.h>

// -------------------------------------------------------------- PUBLIC MACROS

#define DBL_MIN           1.1754945e-38
#define DBL_MAX           6.80564713e+38
#define DBL_DIG           6
#define DBL_MAX_10_EXP    38
#define	NDIG              DBL_DIG+2 	   // Number of digits (ANSI 5.2.4.2.2)

// --------------------------------------------------------------- PUBLIC TYPES

typedef struct divstruct
{
    int quot;
    int rem;
} div_t;

typedef struct ldivstruct
{
    long quot;
    long rem;
} ldiv_t;

typedef struct uldivstruct
{
    unsigned long quot;
    unsigned long rem;
} uldiv_t;

// ------------------------------------------------------------------ CONSTANTS


// ------------------------------------------------------------------ VARIABLES


// ----------------------------------------------- PUBLIC FUNCTION DECLARATIONS

/**
 * @brief Returns absolute value of given argument.
 *
 * The abs function computes the absolute value of an integer num.
 * If the result cannot be represented, the behavior is undefined.
 *
 * @param num Number the absolute value is set for.
 *
 * @return The abs function returns the absolute value.
 */
int abs( int num );

/**
 * @brief Converts string to float.
 *
 * The atof function converts the initial portion of the string
 * pointed to by str to double representation.
 * Except for the behavior on error, it is equivalent to `strtod`.
 *
 * @param str String to be converted.
 *
 * @return The atof function returns the converted value.
 */
float atof( char * __generic str );

/**
 * @brief Converts string to integer.
 *
 * The atoi function converts the initial portion of the string
 * pointed to by str to int representation.
 * Except for the behavior on error, it is equivalent to `strtol`.
 *
 * @param str String to be converted.
 *
 * @return The atoi function returns the converted value.
 */
int atoi( char * __generic str );

/**
 * @brief Converts string to number of type long.
 *
 * The atol function converts the initial portion of the string
 * pointed to by str to long int representation.
 * Except for the behavior on error, it is equivalent to `strtol`.
 *
 * @param str String to be converted.
 *
 * @return The atol function returns the converted value.
 */
long atol( char * __generic str );

/**
 * @brief Divides number (numerator) by denom (denominator).
 *
 * The div function computes the quotient and remainder of the division
 * of the numerator number by the denominator denom. If the division is inexact,
 * the resulting quotient is the integer of lesser magnitude that is the nearest
 * to the algebraic quotient. If the result cannot be represented,
 * the behavior is undefined.
 * Otherwise, quotient * denom + remainder shall equal number.
 *
 * @param number Number to be divided.
 * @param denom Number to be divided by.
 *
 * @return The div function returns a structure of type div-t,
 * comprising of both the quotient and the remainder.
 * The structure shall contain the lollouing members, in either order:
 * -- int quot  / quotient  /
 * -- int rem  / remainder /
 */
div_t div( int number, int denom );

/**
 * @brief Divides number (numerator) by denom (denominator).
 *
 * The ldiv function is similar to the div function, except
 * that the arguments and the members of the returned structure (which has type ldiv-t)
 * all have type long int.
 *
 * @param number Number to be divided.
 * @param denom Number to be divided by.
 *
 * @return The ldiv function returns a structure of type ldiv-t,
 * comprising of both the quotient and the remainder.
 * The structure shall contain the lollouing members, in either order:
 * -- long quot  / quotient  /
 * -- long rem  / remainder /
 */
ldiv_t ldiv( long number, long denom );

/**
 * @brief Divides number (numerator) by denom (denominator).
 *
 * The uldiv function is similar to the div function, except
 * that the arguments and the members of the returned structure (which has type uldiv-t)
 * all have type unsigned long int.
 *
 * @param number Number to be divided.
 * @param denom Number to be divided by.
 *
 * @return The ldiv function returns a structure of type uldiv-t,
 * comprising of both the quotient and the remainder.
 * The structure shall contain the lollouing members, in either order:
 * -- unsigned long quot  / quotient  /
 * -- unsigned long rem  / remainder /
 */
uldiv_t uldiv( unsigned long number, unsigned long denom );

/**
 * @brief Returns the absolute value of num.
 *
 * The labs function is similar to the abs function, except
 * that the argument and the returned value each have type long int.
 *
 * @param num Number the absolute value is set for.
 *
 * @return The abs function returns the absolute value of
 * type long int.
 */
long labs( long num );

/**
 * @brief Returns maximum value of num1 and num2.
 *
 * @param num1 Number 1 to be checked.
 * @param num2 Number 2 to be checked.
 *
 * @return The max function returns the greater
 * value between num1 and num2.
 */
int max( int num1, int num2 );

/**
 * @brief Returns minimum value of num1 and num2.
 *
 * @param num1 Number 1 to be checked.
 * @param num2 Number 2 to be checked.
 *
 * @return The min function returns the lesser
 * value between num1 and num2.
 */
int min( int num1, int num2 );

/**
 * @brief Pseudo-random number generator.
 *
 * The rand function computes a sequence of pseudo-random integers in the range 0 to
 * RAND_MAX.
 *
 * @return Function rand returns random integer value.
 *
 * @note The value of the RAND-MAX is 32767.
 */
int rand();

/**
 * @brief Seeds the random number generator
 * used by the function rand.
 *
 * The srand function uses the argument as a seed for a new
 * sequence of pseudo-random numbers to be returned by subsequent calls to rand.
 * If srand is then called with the same seed value, the sequence of pseudo-random
 * numbers shall be repeated. If rand is called before any calls to srand
 * have been made, the same sequence shall be generated as when srand is
 * first called with a seed value of 1.
 *
 * @param seed Number to be used as new seed.
 *
 * @return The srand function returns no value.
 */
void srand( unsigned seed );

/**
 * @brief Extracts hex value from a
 * given string.
 *
 * @param str String the value is extracted from.
 *
 * @return The xtoi funtion returns a hex value.
 */
int xtoi( char * __generic str );

#ifdef __cplusplus
}
#endif
#endif  // STDLIB_H_

/// \}
// ----------------------------------------------------------------------------
/*
    stdlib.h

    Copyright (c) 2020, MikroElektronika - www.mikroe.com

Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do
so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/
// ----------------------------------------------------------------------------
