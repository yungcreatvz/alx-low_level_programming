#include "main.h"

/**
 * rev_string - print a string in reverse
 * @s: first received value
 * followed by a new line
 */
void rev_string(char *s)
{
	int  i = 0, j;

	while (s[i] != '\0')
		i++;

	char a[i];

	for (j = 0; j < i; j++)
	{
		a[j] += s[i - 1];
		i--;
	}
	_putchar('\n');
}
