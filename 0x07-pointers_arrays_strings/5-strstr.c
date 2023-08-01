#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring needle
 * @haystack: string to scan
 * @needle: string src
 * Return: pointer from index of first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (haystack + i);
	}
	return (NULL);
}
