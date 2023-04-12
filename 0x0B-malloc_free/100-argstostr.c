#include "main.h"
/**
 * argstostr - concatenates all
 *the arguments of the program
 * @ac: the number of arguments
 * @av: the arguments
 *
 * Return: pointer to the new string,
 *or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k = 0, len = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
for (j = 0; av[i][j]; j++)
len++;
str = malloc((len + ac + 1) * sizeof(char));
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
str[k++] = av[i][j];
str[k++] = '\n';
}
str[k] = '\0';
return (str);
}
