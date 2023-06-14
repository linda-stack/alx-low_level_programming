#include "main.h"
#include <ctype.h>
/**
 * word_count - counts the number of words in a string
 * @str: the string to count
 *
 * Return: the number of words in the string
 */
int word_count(char *str)
{
    int i, wc = 0, in_word = 0;

    for (i = 0; str[i]; i++)
    {
        if (isspace(str[i]))
            in_word = 0;
        else if (in_word == 0)
        {
            wc++;
            in_word = 1;
        }
    }
    return (wc);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
    int i, j, k, wc = word_count(str), in_word = 0;
    char **words;

    if (str == NULL || str[0] == '\0' || wc == 0)
        return (NULL);

    words = malloc((wc + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    for (i = 0, j = 0; str[i]; i++)
    {
        if (isspace(str[i]))
            in_word = 0;
        else if (in_word == 0)
        {
            for (k = i; str[k] && !isspace(str[k]); k++)
                ;
            k -= i;
            words[j] = malloc((k + 1) * sizeof(char));
            if (words[j] == NULL)
            {
                while (--j >= 0)
                    free(words[j]);
                free(words);
                return (NULL);
            }
            for (k = 0; str[i] && !isspace(str[i]); i++, k++)
                words[j][k] = str[i];
            words[j++][k] = '\0';
            in_word = 1;
        }
    }
    words[j] = NULL;

    return (words);
}
