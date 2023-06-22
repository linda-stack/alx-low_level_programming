#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the opcodes of its own main function
* @argc: the number of arguments
* @argv: the arguments
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int i, n;
char *p = (char *)main;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < n; i++)
{
printf("%02hhx", p[i]);
if (i < n - 1)
printf(" ");
}
printf("\n");
return (0);
}
