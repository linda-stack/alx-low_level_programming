#include "dog.h"
#include <stdlib.h>
void free_dog(dog_t *d)
/**
 * free_dog - free a dog
 * @d: a pointer to the dog to free
 *
 * This function frees the memory used by a dog_t variable.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);
free(d->owner);
free(d);
}
