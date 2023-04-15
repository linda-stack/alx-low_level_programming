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
/**
 * main - multiplies two positive numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 if successful, 98 if error
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
errors();
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
