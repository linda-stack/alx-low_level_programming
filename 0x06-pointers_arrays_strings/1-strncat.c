#include "main.h"
/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to use from src
 *
 * Description: This function appends at most n bytes from the src string to
 * the dest string, overwriting the terminating null byte (\0) at the end of
 * dest, and then adds a terminating null byte. Returns a pointer to the
 * resulting string dest. src does not need to be null-terminated if it contains
 * n or more bytes.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i;

/* Find the length of the destination string */
while (dest[dest_len] != '\0')
dest_len++;
/* Append at most n bytes from the source string to the destination string */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];

/* Add the null terminator */
dest[dest_len + i] = '\0';

return (dest);
}
