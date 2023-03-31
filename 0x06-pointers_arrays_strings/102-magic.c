#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
int a[5] = {98, 402, 1024, 2048, 4096};
int *p;

p = &a[2];

/* Write your line of code here */
printf("a[2] = %d\n", *(p));

return (0);
}
