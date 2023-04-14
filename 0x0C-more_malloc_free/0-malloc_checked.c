#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
char *c;
c = malloc_checked(sizeof(char) * 1024);
printf("%p\n", (void *)c);
return (0);
}
