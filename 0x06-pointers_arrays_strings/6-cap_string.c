#include "main.h"
#include <stdio.h>

/**
 * cap_string - convert lower to capital after separators
 * @s: string
 * Return: char
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] == ' ' || s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '\t' || s[i] == '\n'))
		{
			if ((s[i + 1] >= 'a' && s[i + 1] <= 'z'))
				s[i] += 'A' - 'a';
		}
		i++;
	}
	return (s);
}
