#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
* main - performs simple operations.
* @argc: number of arguments passed to the program.
* @argv: array containing the program arguments.
*
* Return: 0 on success.
*/
int main(int argc, char **argv)
{
int num1, num2;
char operator;
int (*operation)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2][0];
if ((operator == '/' || operator == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}
operation = get_op_func(argv[2]);
if (!operation)
{
printf("Error\n");
exit(99);
}
printf("%d\n", operation(num1, num2));
return (0);
}
