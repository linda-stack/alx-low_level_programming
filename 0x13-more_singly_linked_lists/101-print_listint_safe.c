#include "lists.h"
#include <stdio.h>
/**
* print_listint_safe - prints a listint_t linked list
* @head: pointer to the start of the list
*
* Return: number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow, *fast;
size_t num = 0;
int n, copy;
if (head == NULL)
{
exit(98);
}
slow = head;
fast = head;
while (slow != NULL && fast != NULL && fast->next != NULL)
{
n = slow->n;
if (n < 0)
{
_putchar('-');
n = -n;
}
copy = n;
do
{
copy /= 10;
if (copy)
_putchar(copy + '0');
} while (copy);
_putchar(n % 10 + '0');
_putchar('\n');
num++;
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
printf("-> [%p] %d\n", (void *)slow, slow->n);
return (num);
}
}
return (num);
}
