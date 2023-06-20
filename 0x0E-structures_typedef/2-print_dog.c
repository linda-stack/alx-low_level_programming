#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print a struct dog
 * @d: a pointer to the struct dog to print
 *
 * This function prints the members of a struct dog variable.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
return;
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
