#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{

int i;
int sign;
unsigned int num;

i = 0;
sign = 1;
num = 0;
while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
{
num = (num * 10) + (s[i] - '0');
i++;
}
return (sign * num);
}





