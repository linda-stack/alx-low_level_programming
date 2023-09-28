#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;
/**
 * Prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: Address of the new element, or NULL if it failed
*/
size_t print_listint(const listint_t *h);
/**
 * Returns the number of elements in a linked listint_t list
 * @head: pointer to the head of the list
 *
 * Return: Address of the new element, or NULL if it failed
*/
size_t listint_len(const listint_t *h);
/**
 * Adds a new node at the beginning of a listint_t list
 * @head: Double pointer to the head of the list
 * @n: The integer to be included in the new node
 *
 * Return: Address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n);
/**
 * Adds a new node at the end of a listint_t list
 * @head: Double pointer to the head of the list
 * @n: The integer to be included in the new node
 *
 * Return: Address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n);
/**
 * Frees a listint_t list
 * @head: pointer to the head of the list
*/
void free_listint(listint_t *head);
/**
 * Frees a listint_t list and sets the head to NULL
 * @head: Double pointer to the head of the list
*/
void free_listint2(listint_t **head);
/**
 * Deletes the head node of a listint_t linked list
 *and returns the head node’s data (n)
 * @head: Double pointer to the head of the list
*/
int pop_listint(listint_t **head);
/**
 * Returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: integer
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/**
 * Returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the list
*/
int sum_listint(listint_t *head);
/**
 * Inserts a new node at a given position
 * @head: Double pointer to the head of the list
 * @n: The integer to be included in the new node
 *@idx: index integer
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/**
 * Deletes the node at index index of a listint_t linked list
 * @head: Double pointer to the head of the list
 * @index: integer
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);
/**
 * Reverses a listint_t linked list
 * @head: Double pointer to the head of the list
*/
listint_t *reverse_listint(listint_t **head);
/**
 * Prints a listint_t linked list that could possibly have a loop
 * @head: pointer to the head of the list
*/
size_t print_listint_safe(const listint_t *head);
/**
 * Frees a list and sets its head to NULL even if it has a loop
 * @h: double pointer to the list
*/
size_t free_listint_safe(listint_t **h);
/**
 * Finds the loop in a linked list
 * @head: pointer to the head of the list
*/
listint_t *find_listint_loop(listint_t *head);
/**
 * Writes the character c to stdout
 * @c: character
*/
extern int _putchar(char c);
#endif
