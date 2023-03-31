#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Description: This function compares two strings character by character and
 * returns an integer indicating their lexicographic order. If s1 is greater
 * than s2, the function returns a positive value. If s1 is less than s2, it
 * returns a negative value. If s1 is equal to s2, it returns 0.
 *
 * Return: an integer indicating the lexicographic order of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}

return (s1[i] - s2[i]);
}
