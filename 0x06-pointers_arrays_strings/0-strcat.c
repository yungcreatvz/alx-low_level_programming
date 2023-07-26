#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate src string to destination string
 * @dest: string destination
 * @src: string to add
 * Return: fusionned strings 
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, lens = 0, lend = 0;

	while (dest[lend] != '\0')
		lend++;
	while (src[lens] != '\0')
		lens++;
	char str[lend + lens];

	for (i = 0; i < lend + lens; i++)
	{
		if (i < lend)
			str[i] = dest[i];
		else
		{
			str[i] = src[j];
			j++;
		}

	}
	return (str);
}
