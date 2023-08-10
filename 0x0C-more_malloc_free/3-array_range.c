#include <stdlib.h>
#include "main.h"

/**
 * array_range -creates an array of integers
 * @min: starting value
 * @max: ending value
 * Return: a pointer to new array
 */
int *array_range(int min, int max)
{
	unsigned int i;
	int *a;

	if (min > max || a == NULL)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		a[i] = min;
	return (a);
}
