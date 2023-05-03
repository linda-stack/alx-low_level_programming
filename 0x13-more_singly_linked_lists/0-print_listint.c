#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;
    int n;
    char c;

    while (h != NULL)
    {
        n = h->n;
        if (n < 0)
        {
            _putchar('-');
            n = -n;
        }
        if (n / 10)
            print_number(n / 10);
        c = n % 10 + '0';
        _putchar(c);
        _putchar('\n');
        h = h->next;
        count++;
    }
    return (count);
}
