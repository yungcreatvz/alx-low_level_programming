#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: string to scan
 * @c: char to find
 * Return: pointer to the first occurrence of s string or null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (NULL);
}
