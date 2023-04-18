#include <stdlib.h>
#include "dog.h"

char *_strdup(char *str);

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

new_dog->name = _strdup(name);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

new_dog->age = age;

new_dog->owner = _strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

return (new_dog);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len;

if (str == NULL)
return (NULL);

for (len = 0; str[len]; len++)
        ;
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return (NULL);
for (i = 0; str[i]; i++)
dup[i] = str[i];
dup[len] = '\0';
return (dup);
}
