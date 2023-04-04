#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: the first number to add
 * @n2: the second number to add
 * @r: the buffer to store the result
 * @size_r: the size of the buffer
 *
 * Return: a pointer to the result
 *         0 if the result can't be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, j, k, l, m, sum;
char *temp;

i = j = k = sum = 0;
while (*(n1 + i) != '\0')
i++;
while (*(n2 + j) != '\0')
j++;
if (i >= j)
l = i;
else
l = j;
if (size_r <= l + 1)
return (0);
*(r + l + 1) = '\0';
for (k = l, i--, j--; k >= 0; k--, i--, j--)
{
m = 0;
if (i >= 0)
m += *(n1 + i) - '0';
if (j >= 0)
m += *(n2 + j) - '0';
m += sum;
if (m >= 10)
{
sum = 1;
*(r + k) = m % 10 + '0';
}
else
{
sum = 0;
*(r + k) = m + '0';
}
}
if (*(r) == '0')
{
temp = r;
r++;
}
return (r);
}
