#include "main.h"
/**
 * print_number - Prints an integer
 *
 * @n: Integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
int divisor = 1;
int digit;
int i;
if (n < 0) {
putchar('-');
n *= -1;
}
while (n / divisor >= 10)
divisor *= 10;

for (i = divisor; i >= 1; i /= 10) {
digit = n / i;
putchar(digit + '0');
n -= digit * i;
}
}
