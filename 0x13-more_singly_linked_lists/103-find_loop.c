#include "lists.h"

/**
* find_listint_loop - finds the loop in a listint_t linked list
* @head: pointer to the list
* Return: address of the node where the loop starts, or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;

if (head == NULL)
{
return (NULL);
}

slow = head;
fast = head;

while (slow != NULL && fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
slow = head;

while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}

return (slow);
}
}

return (NULL);
}
