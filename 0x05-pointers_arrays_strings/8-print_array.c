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

for (i = 0; i < n; i++)
{
num = a[i];
if (num < 0)
{
num = -num;
putchar('-');
}
temp = num;
while (temp /= 10)
num *= 10;
while (num >= 1)
{
putchar((temp / num % 10) + '0');
num /= 10;
}
if (i != n - 1)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
