#include "main.h"
#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a new type describing a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: Longer description
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
#endif /* DOG_H */
