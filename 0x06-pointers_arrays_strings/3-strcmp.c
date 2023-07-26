#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: negative s1 >, 0 if equal , pos if s2>
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
