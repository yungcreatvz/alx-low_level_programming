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
	unsigned int i, val;
	int *a;

	if (min > max)
		return (NULL);
	a = malloc((max - min + 1) * sizeof(int);
	val = min;
	for (i = 0; min <= max; i++, val++)
		a[i] = val;
	return (a);
}
