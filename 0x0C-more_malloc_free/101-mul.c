#include "main.h"
/**
 * is_number - checks if a string is a number
 * @s: string to check
 *
 * Return: 1 if s is a number, 0 otherwise
 */
int is_number(char *s)
{
int i;
for (i = 0; s[i]; i++)
{
if (s[i] < '0' || s[i] > '9')
return (0);
}
return (1);
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
if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
