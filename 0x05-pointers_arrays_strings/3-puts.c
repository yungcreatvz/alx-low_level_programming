#include "main.h"

/**
 * _puts - print a new string to stdout
 * @str: first received value
 * followed by a new line
 */
void _puts(char *str)
{
	int  i = 0;

	while (str[i] != '\0')
	{
		_putchars(str[i]);
		i++;
	}
	_putschar('\n');
}
