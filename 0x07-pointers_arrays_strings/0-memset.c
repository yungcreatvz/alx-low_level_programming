#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte.
 * @s:
 * @b:
 * @n:
 * Return: ppointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	char set[n];

	**s = set;

	while (set[i] != '\0')
	{
		set[i] = b;
		i++;
	}
	return *s;
}
