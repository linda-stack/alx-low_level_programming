#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to the struct dog to initialize
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * This function initializes the members
 *of a struct dog variable with the given
 * values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
