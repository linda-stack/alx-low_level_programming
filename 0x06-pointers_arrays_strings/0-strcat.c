#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Description: This function appends the 
 *src string to the dest string,
 * overwriting the terminating null byte
 * (\0) at the end of dest, and then
 * adds a terminating null byte. Returns
 *a pointer to the resulting string dest.
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int i;
while (dest[dest_len] != '\0')
dest_len++;
for (i = 0; src[i] != '\0'; i++)
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
return (dest);
}
