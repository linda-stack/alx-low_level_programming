#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
 * File: 3-function_like_macro.h
 * Auth: (your name here)
 * Desc: Header file that defines a function-like macro ABS(x) that
 *       computes the absolute value of a number x.
 */

#include <stdio.h>
#include <stdlib.h>

#define ABS(x) _Generic((x), \
    long long: llabs, \
    default: labs, \
    float: fabsf, \
    double: fabs, \
    long double: fabsl)(x)

int _putchar(char c)
{
return (write(1, &c, 1));
}

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
print_number(n / 10);
_putchar(n % 10 + '0');
}

int main(void)
{
int i;
int j;

i = ABS(-98) * 10;
j = ABS(98) * 10;
print_number(i);
_putchar(',');
_putchar(' ');
print_number(j);
_putchar('\n');

return (EXIT_SUCCESS);
}
#endif
