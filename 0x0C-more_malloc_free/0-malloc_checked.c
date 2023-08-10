#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b:size of memory to alloc
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *x;

	malloc(b);
	if (x == NULL)
		return (98);
}
