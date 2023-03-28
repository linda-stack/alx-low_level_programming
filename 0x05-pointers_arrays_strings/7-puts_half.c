#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string to print
 *
 * Return: void
 */
void puts_half(char *str)
{
int len = 0;
int n;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
n = len / 2;
}
else
{
n = (len - 1) / 2;
}

for (int i = n; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}
