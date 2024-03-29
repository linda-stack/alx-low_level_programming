#include "lists.h"

/**
* delete_nodeint_at_index - deletes the
*node at index of a listint_t linked list
* @head: double pointer to the list
* @index: index of the node that should
*be deleted, starts at 0
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp;
listint_t *next;
unsigned int i;

if (head == NULL || *head == NULL)
{
return (-1);
}

temp = *head;

if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}

for (i = 0; temp != NULL && i < index - 1; i++)
{
temp = temp->next;
}

if (temp == NULL || temp->next == NULL)
{
return (-1);
}

next = temp->next->next;
free(temp->next);
temp->next = next;

return (1);
}
