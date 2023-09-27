#include "lists.h"
#include <stdlib.h>
/**
* free_listint_safe - frees a listint_t list
* @h: double pointer to the start of the list
*
* Return: size of the list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
size_t num = 0;
listint_t *slow, *fast, *prev = NULL;
if (h == NULL || *h == NULL)
{
return (0);
}
slow = *h;
fast = *h;
while (slow != NULL && fast != NULL && fast->next != NULL)
{
num++;
prev = slow;
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
free(prev);
*h = NULL;
return (num);
}
free(prev);
}
*h = NULL;
return (num);
}
