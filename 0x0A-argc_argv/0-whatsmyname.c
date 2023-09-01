#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * main - prints the name of the program
 * @argc: the number of command line arguments
 * @argv: an array of pointers to the command line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i;
for (i=0; i<argc, i++)
printf("%s \n", argv[0]);
return (0);
}
