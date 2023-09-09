#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
* is_number - checks if a string contains only digits
* @str: string to check
*
* Return: 1 if str contains only digits, 0 otherwise
*/
int is_number(char *str)
{
while (*str)
{
if (!isdigit(*str))
return (0);
str++;
}
return (1);
}

/**
* _strlen - returns the length of a string
* @str: string to check
*
* Return: length of str
*/
int _strlen(char *str)
{
int len = 0;

while (*str++)
len++;
return (len);
}

/**
* multiply - multiplies two numbers stored as strings
* @num1: first number
* @num2: second number
*
* Return: result of the multiplication as a string
*/
char *multiply(char *num1, char *num2)
{
int len1 = _strlen(num1), len2 = _strlen(num2);
int len = len1 + len2;
char *result = calloc(len + 1, sizeof(char));
char *start = result;
int i, j, carry;

for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
carry += (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1];
result[i + j + 1] = carry % 10;
carry /= 10;
}
result[i] += carry;
}
for (i = 0; i < len; i++)
result[i] += '0';
while (*result == '0' && *(result + 1) != '\0')
result++;
return (start);
}

/**
* main - entry point
*
* @argc: number of command line arguments
* @argv: array of command line arguments
*
* Return: 0 on success, 98 on error
*/
int main(int argc, char **argv)
{
char *result;

if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
{
printf("Error\n");
exit(98);
}
result = multiply(argv[1], argv[2]);
printf("%s\n", result);
free(result);
return (0);
}
