#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: first received value
 * followed by a new line
 */
void print_rev(char *s)
{
	int  i = 0;

	while (s[i] != '\0')
		i++;
	for (; i > 0; i--)
		_putchar(s[i - 1]);
	_putchar('\n');
}
