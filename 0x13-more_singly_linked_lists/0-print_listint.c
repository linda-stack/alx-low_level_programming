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
int n, copy, num_digits, divisor, digit;
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
num_digits = 0;
do {
num_digits++;
copy /= 10;
} while (copy);
divisor = 1;
for (int i = 1; i < num_digits; i++)
divisor *= 10;
while (divisor)
{
digit = n / divisor;
_putchar(digit + '0');
n -= digit * divisor;
divisor /= 10;
}
_putchar('\n');
current = current->next; 
count++;
}
return (count);
}
