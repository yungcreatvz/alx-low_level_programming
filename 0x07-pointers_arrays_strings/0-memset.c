#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: buffer adress
 * @b: consnt to be filled
 * @n: size of memory
 * Return: ppointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
