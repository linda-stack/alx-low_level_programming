#include "main.h"
/**
 * word_count - counts the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in the string
 */
int word_count(char *str)
{
int wc = 0, in_word = 0;
while (*str)
if (*str++ != ' ')
wc += !in_word, in_word = 1;
else
in_word = 0;
return (wc);
}
/**
 * free_words - frees an array of strings
 * @words: the array of strings to free
 * @k: the number of strings to free
 *
 * Return: Nothing.
 */
void free_words(char **words, int k)
{
while (k--)
free(words[k]);
free(words);
}
/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
if (!str || !*str)
return (NULL);
int wc = word_count(str);
if (!wc)
return (NULL);
char **words = malloc((wc + 1) * sizeof(*words));
if (!words)
return (NULL);
for (int k = 0, len = 0, in_word = 0; *str; ++str)
if (*str != ' ')
if (!in_word)
len = 1, in_word = 1;
else
++len;
else if (in_word)
{
words[k] = malloc((len + 1) * sizeof(**words));
if (!words[k])
{
free_words(words, k);
return (NULL);
}
memcpy(words[k], str - len, len);
words[k++][len] = '\0';
in_word = 0;
}
if (in_word)
{
words[wc] = malloc((len + 1) * sizeof(**words));
if (!words[wc])
{
free_words(words, wc);
return (NULL);
}
memcpy(words[wc], str - len, len);
words[wc++][len] = '\0';
}
words[wc] = NULL;
return (words);
}
