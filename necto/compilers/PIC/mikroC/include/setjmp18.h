#ifndef _SETJMP18_H
#define _SETJMP18_H
/******************************************************************************/
/*                                                                            */
/* FILENAME   : setjmp.h                                                      */
/* PROJECT    : Implementation of setjmp and longjmp                          */
/* CPU TYPE   : Microchip PIC18 family                                        */
/* COMPILER   : microC compiler for PIC v. 6.2.0.0 (241106)                   */
/*                                                                            */
/*                                                                            */
/**************************** CHANGE AND RELEASE LOG **************************/
/* Version | ACTION                                           |  DATE  | SIG  */
/* --------|--------------------------------------------------|--------|----- */
/*         |                                                  |        |      */
/*    0.00 | Created file                                     | 231106 | ST   */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/*                                                                            */
/*  type: jmp_buf                                                             */
/*  Purpose:  array of type (jmp_buf) suitible for holding the                */
/*                   information needed for restoring calling environment     */
/****************************       CHANGE LOG       **************************/
/* Version | ACTION                                           |  DATE  | SIG  */
/* --------|--------------------------------------------------|--------|----- */
/*         |                                                  |        |      */
/*    0.00 | Created type jmp_buf                             | 231106 | IR   */
/*         |                                                  |        |      */
/******************************************************************************/
typedef char jmp_buf[4];

/******************************************************************************/
/*                                                                            */
/*  Function: setjmp                                                          */
/*  Purpose:  saves calling position in jmp_buf for later use by longjmp      */
/*  CallParams: env: array of type (jmp_buf) suitible for holding the         */
/*                   information needed for restoring calling environment     */
/*  ReturnValues:  if the return is from direct invocation it returns 0       */
/*                 if the return is from  a call to the longjmp               */
/*                 it reurns nonzero value                                    */
/****************************       CHANGE LOG       **************************/
/* Version | ACTION                                           |  DATE  | SIG  */
/* --------|--------------------------------------------------|--------|----- */
/*         |                                                  |        |      */
/*    0.00 | Created function setjmp                          | 231106 | ST   */
/*         |                                                  |        |      */
/******************************************************************************/
int setjmp(jmp_buf env);

/******************************************************************************/
/*                                                                            */
/*  Function: longjmp                                                         */
/*  Purpose:  restores calling position saved in jmp_buf by most recent       */
/*            invocation of setjmp macro. If there has been no such           */
/*            invocation, or function conatinig the invocation of setjmp has  */
/*            terminated in the interim, the behaviour is undefined           */
/*  CallParams: env: array of type (jmp_buf) holding the information          */
/*                   saved by corresponding setjmp invocation                 */
/*              val: char value, that will return corresponding setjmp        */
/*  ReturnValues:  longjmp causes setjmp to return val,if val is 0 it will    */
/*                 return 1                                                   */
/*                                                                            */
/****************************       CHANGE LOG       **************************/
/* Version | ACTION                                           |  DATE  | SIG  */
/* --------|--------------------------------------------------|--------|----- */
/*         |                                                  |        |      */
/*    0.00 | Created function                                 | 231106 | IR   */
/*         |                                                  |        |      */
/******************************************************************************/
void longjmp(jmp_buf env, int val);

#endif