#include "main.h"

/**
 * puts_half - print half values from string
 * @str: received string
 * followed by a new line
 */
void puts_half(char *str)
{
	int  l = 0, i = 0;

	while (str[l] != '\0')
		l++;
	if (l % 2 == 1)
		i = (l - 1) / 2;
	else
		i = l / 2;
	for (; i <= l; i++)
		_putchar(str[i]);
	_putchar('\n');
}
