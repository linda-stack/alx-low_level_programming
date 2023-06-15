#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: minimum value (included)
* @max: maximum value (included)
*
* Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
int *arr;
int i;

if (min > max)
return (NULL);
arr = malloc(sizeof(int) * (max - min + 1));
if (arr == NULL)
return (NULL);
for (i = 0; min <= max; i++, min++)
arr[i] = min;
return (arr);
}
