#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: The list_t list
 *
 * Return: The number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}

	return (count);
}

/**
 * main - Demonstrates the use of the print_list function
 *
 * Return: Always 0
 */
int main(void)
{
	list_t *head;
	list_t *new;
	size_t n;

	head = NULL;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error: memory allocation failed\n");
		return (1);
	}
	new->str = strdup("Hello");
	new->len = strlen(new->str);
	new->next = head;
	head = new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error: memory allocation failed\n");
		return (1);
	}
	new->str = strdup("World");
	new->len = strlen(new->str);
	new->next = head;
	head = new;

	n = print_list(head);
	printf("The list contains %lu elements\n", n);

	return (0);
}
