#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Print diagonal line from given size
 * @n: size of line
 * followed by a new line
 * Return: 0 ( success)
 */
void print_diagonal(int n)
{
	while (n > 1)
	{
		_putchar(' ');
		n--;
	}
	_putchar('\');
	_putchar('\n');
}
