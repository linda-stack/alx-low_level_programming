#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* string_nconcat - concatenates two strings
* @s1: first string
* @s2: second string
* @n: number of bytes of s2 to concatenate
*
* Return: pointer to newly allocated space in memory with s1 + n bytes of s2
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1 = 0, len2 = 0, i;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;
if (n >= len2)
n = len2;
concat = malloc(sizeof(char) * (len1 + n + 1));
if (concat == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concat[i] = s1[i];
for (; i < len1 + n; i++)
concat[i] = s2[i - len1];
concat[i] = '\0';
return (concat);
}
