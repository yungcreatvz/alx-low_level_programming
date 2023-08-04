#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to scan
 * @accept: string src
 * Return: lenght of prefix
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		i++;
	}
	return (NULL);
}
