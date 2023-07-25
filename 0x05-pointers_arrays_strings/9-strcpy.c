#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string pointed to by src
 * @dest: paste destinaation
 * @src: string to copy
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0, l = 0;

	while (src[l] != '\0')
		l++
	for (;i < l; i++)
		dest[i] = src[i];
	dest[i] = '\n';

	return (dest);
}
