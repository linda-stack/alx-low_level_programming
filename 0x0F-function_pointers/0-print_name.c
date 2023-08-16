#include "function_pointers.h"

/**
 * print_name - prints a name using
 *the provided function
 * @name: name of the person
 * @f: function to use to print the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
