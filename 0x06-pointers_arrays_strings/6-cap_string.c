#include "main.h"
/**
 * is_separator - checks if a character is a separator
 * @c: the character to check
 *
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
int i;

for (i = 0; separators[i] != '\0'; i++)
{
if (c == separators[i])
{
return (1);
}
}

return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to change
 *
 * Return: a pointer to the changed string
 */
char *cap_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (i == 0 || is_separator(s[i - 1]))
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 'a' + 'A';
}
}
}

return (s);
}
