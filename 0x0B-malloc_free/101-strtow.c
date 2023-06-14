#include "main.h"
/**
 * word_count - Counts the number of words in a string
 * @str: The string to count
 *
 * Return: The number of words in the string
 */
int word_count(char *str)
{
    int i, wc = 0, in_word = 0;

    for (i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
            in_word = 0;
        else if (in_word == 0)
        {
            wc++;
            in_word = 1;
        }
    }
    return wc;
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words)
 */
char **strtow(char *str)
{
    int i, j, k, wc = word_count(str), in_word = 0;
    char **words;

    if (str == NULL || str[0] == '\0' || wc == 0)
        return NULL;

    words = malloc((wc + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    words[j] = NULL;

    return words;
}
