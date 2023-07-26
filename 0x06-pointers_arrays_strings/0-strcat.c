#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate src string to destination string
 * @dest: string destination
 * @src: string to add
 * Return: dest merged with src string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, lens = 0, lend = 0;

	while (dest[lend] != '\0')
		lend++;
	while (src[lens] != '\0')
		lens++;
	j = lend;
	for (i = 0; i <= lens; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
