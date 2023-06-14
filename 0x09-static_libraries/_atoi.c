#!/bin/bash
#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: the string to be converted
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int res = 0;
while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
{
res = res * 10 + s[i] - '0';
i++;
}
return (sign * res);
}
