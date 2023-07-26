#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy string to dest
 * @dest: string destination
 * @src: string to add
 * @n: lenght to paste
 * Return: dest merged with src string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0, lens = 0, lend = 0;

	while (dest[lend] != '\0')
		lend++;
	while (src[lens] != '\0')
		lens++;
	j = lend;
	for (i = 0; i <= lens ; i++)
	{
		if (i == n)
			i = lens;
		dest[j] = src[i];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
