#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - create a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the new dog, or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char *name_copy;
char *owner_copy;
d = malloc(sizeof(*d));
if (d == NULL)
return (NULL);

name_copy = malloc(strlen(name) + 1);
if (name_copy == NULL)
{
free(d);
return (NULL);
}
strcpy(name_copy, name);

owner_copy = malloc(strlen(owner) + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(d);
return (NULL);
}
strcpy(owner_copy, owner);

d->name = name_copy;
d->age = age;
d->owner = owner_copy;

return (d);
}
