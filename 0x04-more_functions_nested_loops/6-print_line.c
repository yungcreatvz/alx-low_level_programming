#include <stdio.h>
#include "main.h"

/**
 * print_line - Print line from given size
 * @n: size of line
 * followed by a new line
 * Return: 0 ( success)
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
