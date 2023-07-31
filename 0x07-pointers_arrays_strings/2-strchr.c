#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @dest: detination of src input
 * Return: pointer to the first occurrence of s string or null
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s[i]);
		i++;
	}
	return (NULL);
}
