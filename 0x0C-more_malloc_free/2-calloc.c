#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: table lenght
 * @size: size of unit
 * Return: a pointer to the allocated memory or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == NULL || size == NULL)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		a[i] = '0';

	return (a);
}
