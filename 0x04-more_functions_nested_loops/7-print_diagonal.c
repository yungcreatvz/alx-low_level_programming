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
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = i; j > 0; j--)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
