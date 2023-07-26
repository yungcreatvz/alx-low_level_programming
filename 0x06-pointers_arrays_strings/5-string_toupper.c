#include "main.h"
#include <stdio.h>

/**
 * string_toupper - convert lower to capital
 * @s: string
 * Return: char
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\n')
	{
		if ((s[i] <= 'z' && s[i] >= 'a')
			s[i] += 'A' - 'a';
		i++;
	}
	return (s);
}
