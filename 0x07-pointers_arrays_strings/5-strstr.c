#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring needle
 * @haystack: string to scan
 * @needle: string src
 * Return: pointer from index of first occurence
 */
char *_strstr(char *haystack, char *needle);
{
	int i = 0, j = 0, match = 0;

	while (haystack[i] != '\0')
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i] == needle[j])
			{
				match = 1;
			}
		}
		if ((match == 1 && !needle[j]))
			return (haystack + i);
		i++;
	}
	return (NULL);
}
