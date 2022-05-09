#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: A pointer to the new array
 */

int *array_range(int min, int max)
{
int *pr;
int i, buffer;

if (min > max)
return (NULL);

buffer = max - min + 1;

pr = malloc(sizeof(int) * buffer);

if (pr == NULL)
return (NULL);

for (i = 0; min <= max; i++)
pr[i] = min++;

return (pr);
}
