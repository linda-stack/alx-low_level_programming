#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: the array to print
 * @n: the number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
int num;
int temp;
int div;

for (i = 0; i < n; i++)
{
num = a[i];
if (num < 0)
{
num = -num;
putchar('-');
}
temp = num;
div = 1;
while (temp /= 10)
div *= 10;
while (div >= 1)
{
putchar((num / div % 10) + '0');
div /= 10;
}
if (i != n - 1)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}

