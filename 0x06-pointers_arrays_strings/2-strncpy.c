#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of characters to copy from src
 *
 * Description: This function copies at most n characters from the src string
 * to the dest string. If there are fewer than n characters in src, the
 * remaining space in dest is filled with null bytes. Returns a pointer to the
 * resulting string dest.
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

/* Copy at most n characters from src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

/* If there are fewer than n characters in src, pad dest with null bytes */
for (; i < n; i++)
dest[i] = '\0';

return (dest);
}
