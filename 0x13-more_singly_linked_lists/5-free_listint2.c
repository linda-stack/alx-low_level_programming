#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - frees a listint_t list and sets the head to NULL
* @head: double pointer to the list
* Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *temp;

if (head == NULL)
{
return;
}

while (*head != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
}
