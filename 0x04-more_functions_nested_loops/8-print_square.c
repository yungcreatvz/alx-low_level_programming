#include <stdio.h>
#include "main.h"

/**
 * print_square - Print square from given size
 * @size: size of line
 * followed by a new line
 * Return: 0 ( success)
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
