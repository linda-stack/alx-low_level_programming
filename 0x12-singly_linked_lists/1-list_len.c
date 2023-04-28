#include "lists.h"

/**
 * list_len_recursive - Returns the number of elements in a list_t list
 * @h: The list_t list
 *
 * Return: The number of elements in h
 */
size_t list_len_recursive(const list_t *h)
{
	if (h == NULL)
		return (0);

	return (1 + list_len_recursive(h->next));
}

/**
 * list_len - Returns the number of elements in a list_t list
 * @h: The list_t list
 *
 * Return: The number of elements in h
 */
size_t list_len(const list_t *h)
{
	return (list_len_recursive(h));
}
