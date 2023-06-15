#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of command line arguments
 * @argv: an array of pointers to the command line arguments
 *
 * Return: 0 if successful, 1 if the program does not receive two arguments
 */
int main(int argc, char *argv[])
{
int a, b, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
a = atoi(argv[1]);
b = atoi(argv[2]);
result = a * b;
printf("%d\n", result);
return (0);
}
