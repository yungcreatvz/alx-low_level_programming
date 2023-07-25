#include "main.h"

/**
 * put_half - print half values from string
 * @str: received string
 * followed by a new line
 */
void puts_half(char *str)
{
	int  l =_strlen(*str), i;
	
	if (l % 2 == 0)
		i = l - 1 /2;
	else 
		i = l / 2;

	for (;str[i] < l; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
