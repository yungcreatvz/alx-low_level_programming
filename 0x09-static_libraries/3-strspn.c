#include "main.h"
#include <stdio.h>

/**
 * _strspn - the length of a prefix substring.
 * @s: string to scan
 * @accept: string to check
 * Return: lenght of prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
			break;
		i++;
	}
	return (i);
}
