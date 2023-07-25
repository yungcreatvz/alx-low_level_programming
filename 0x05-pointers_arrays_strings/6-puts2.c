#include "main.h"

/**
 * puts2 - print pair values from string
 * @str: received string
 * followed by a new line
 */
void puts2(char *str)
{
	int  i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
