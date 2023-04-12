#include "main.h"
/**
 * word_count - counts the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in the string
 */
int word_count(char *str)
{
int i, wc = 0, in_word = 0;
for (i = 0; str[i]; i++)
{
if (str[i] != ' ')
{
if (!in_word)
wc++;
in_word = 1;
}
else
in_word = 0;
}
return (wc);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
char **words;
int i, j, k = 0, wc, len = 0, in_word = 0;
if (str == NULL || str[0] == '\0')
return (NULL);
wc = word_count(str);
if (wc == 0)
return (NULL);
words = malloc((wc + 1) * sizeof(char *));
if (words == NULL;
return (NULL);
for (i = 0; str[i]; i++)
{
if (str[i] != ' ')
{
if (!in_word)
{
for (j = i; str[j] && str[j] != ' '; j++)
len++;
words[k] = malloc((len + 1) * sizeof(char));
if (words[k] == NULL)
{
free_words(words, k);
return (NULL);
}
len = 0;
}
in_word = 1;
words[k][len++] = str[i];
}
else
{
if (in_word)
words[k++][len] = '\0';
in_word = 0;
len = 0;
}
}
if (in_word)
words[k++][len] = '\0';
words[k] = NULL;
return (words);
}
  
