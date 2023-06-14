#include "main.h"
/**
 * _puts - writes a string to the standard output
 * @s: the string to be written
 */
void _puts(char *s)
{
while (*s)
putchar(*s++);
putchar('\n');
}
