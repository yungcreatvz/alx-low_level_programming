#include "main.h"

/**
 * rev_string - print a string in reverse
 * @s: first received value
 * followed by a new line
 */
void rev_string(char *s)
{
	int  i = 0, j, prev;
	char a;

	while (s[i] != '\0')
		i++;
	prev = i - 1;
	for (j = 0; j < i / 2; j++)
	{
		a = s[j];
		s[j] = s[prev];
		s[prev--] = a;
	}
}
