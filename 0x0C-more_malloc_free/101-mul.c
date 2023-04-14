#include "main.h"
/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: string to check
 *
 * Return: length of s
 */
int _strlen(char *s)
{
int i = 0;
while (*s++)
i++;
return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
printf("Error\n");
exit(98);
}
