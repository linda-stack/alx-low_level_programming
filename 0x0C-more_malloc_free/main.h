#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
* Writes a character to stdout
*Allocates memory using malloc and exits with status 98 on failure
*Concatenates two strings, using at most n bytes from s2
*Allocates memory for an array, using malloc, and initializes it to zero
*Creates an array of integers containing all numbers from min to max
*Reallocates a memory block using malloc and free
*/
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
