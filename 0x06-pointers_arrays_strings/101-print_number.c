#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to print
 *
 * Return: nothing
 */
void print_number(int n)
{
unsigned int num;
int divisor = 1;

if (n < 0)
{
putchar('-');
num = -n;
}
else
{
num = n;
}

while (num / divisor > 9)
{
divisor *= 10;
}

while (divisor != 0)
{
putchar('0' + num / divisor);
num %= divisor;
divisor /= 10;
}
}
