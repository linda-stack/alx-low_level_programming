#include "lists.h"
#include <stdlib.h>

/**
* free_listint - frees a listint_t list
* @head: pointer to the list
* Return: void
*/
void free_listint(listint_t *head)
{
listint_t *temp;

while (head)
{
temp = head;
head = head->next;
free(temp);
}
}
