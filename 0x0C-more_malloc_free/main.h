#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/* function prototypes */

/* Writes a character to stdout */
int _putchar(char c);
/* Allocates memory using malloc and exits with status 98 on failure */
void *malloc_checked(unsigned int b);

/* Concatenates two strings, using at most n bytes from s2 */
char *string_nconcat(char *s1, char *s2, unsigned int n);

/* Allocates memory for an array, using malloc, and initializes it to zero */
void *_calloc(unsigned int nmemb, unsigned int size);

/* Creates an array of integers containing all numbers from min to max */
int *array_range(int min, int max);

/* Reallocates a memory block using malloc and free */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /* MAIN_H */

