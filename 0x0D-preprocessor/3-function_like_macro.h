#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
* File: 3-function_like_macro.h
* Auth: (your name here)
* Desc: Header file that defines a function-like macro ABS(x) that
*computes the absolute value of a number x.
*/

#include <stdio.h>
#include <stdlib.h>

#define ABS(X) ((X) > 1 ? (X) : (-1) * (X))
#endif
