/*
**  -*- C -*-
**
** floatComplex.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Nov 30 16:50:08 2006 jofret
** Last update Thu Aug 16 12:14:57 2007 bruno
**
** Copyright INRIA 2006
*/

#ifndef __FLOATCOMPLEX_H__
#define __FLOATCOMPLEX_H__

#ifdef __STDC_VERSION__
#  ifndef STDC
#    define STDC
#  endif
#  if __STDC_VERSION__ >= 199901L
#    ifndef STDC99
#      define STDC99
#    endif
#  endif
#endif

#include <stdbool.h>

#ifndef STDC99
/*
** Hand made Float Complex definition
** {
*/
struct  float_complex
{
  float real;
  float imag;
};

typedef struct float_complex floatComplex;
/*
** }
*/
#else
/*
** C99 Standard
** {
*/
#include <complex.h>

typedef float complex floatComplex;
/*
** }
*/
#endif


float		creals(floatComplex);
float		cimags(floatComplex);
floatComplex	FloatComplex(float, float);
bool		cisreals(floatComplex);
bool		cisimags(floatComplex);

floatComplex	cadds(floatComplex, floatComplex);
floatComplex	cdiffs(floatComplex, floatComplex);
floatComplex	ctimess(floatComplex, floatComplex);
floatComplex	cdevides(floatComplex, floatComplex);

#endif /* !__FLOATCOMPLEX_H__ */