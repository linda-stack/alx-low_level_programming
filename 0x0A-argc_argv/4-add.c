#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: the number of command line arguments
 * @argv: an array of pointers to the command line arguments
 *
 * Return: 0 if successful, 1 if one of
 *the numbers contains non-digits
 */
int main(int argc, char *argv[])
{
int i, j, sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
