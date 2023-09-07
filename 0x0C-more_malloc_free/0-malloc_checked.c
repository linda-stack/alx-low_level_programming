#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc
* @b: number of bytes to allocate
* Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *ptr = (malloc(b));
if (ptr == NULL)
{
char *str = ("Error: malloc failed\n");
char *c;
for (c = str; *c != '\0'; c++)
{
putchar(*c);
}
exit(98);
}
return (ptr);
}
