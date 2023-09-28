#include "lists.h"
#include <stdio.h>
/**
* print_listint - prints all the
*elements of a listint_t list
* @h: pointer to the start of the list
*
* Return: number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
const listint_t *current;
size_t count = 0;
int n, copy;
current = h;
while (current != NULL)
{
n = current->n;
if (n < 0)
{
_putchar('-');
n = -n;
}
copy = n;
do {
copy /= 10;
if (copy)
_putchar(copy + '0');
} while (copy);
_putchar(n % 10 + '0');
_putchar('\n');
current = current->next; count++;
}
return (count);
}
