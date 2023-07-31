#include "main.h"
#include <stdio.h>

/**
 * _memset - copies memory are
 * @dest: detination of src input
 * @src: source to insert in dest
 * @n: range for input
 * Return:  a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for ( i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
