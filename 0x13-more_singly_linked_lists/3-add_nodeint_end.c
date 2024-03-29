#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the
 *end of a `listint_t` list.
 *
 * @head: A pointer to the head of the list.
 * @n: The integer value to be added to the
 *new node.
 *
 * Return: A pointer to the new node
 *or `NULL` if an error occurred.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *temp;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
return (new_node);
}
