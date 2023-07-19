#include <stdio.h>
#include "main.h"

/**
 * print_times_table  - print n times table
 * starting from 0
 * @n: end table
 * followed by a new line
 * Return: table per line
 */
void print_times_table(int n)
{
	int j, m, r;

	for (j = 0; j <= n; j++)
	{
		for (m = 0; m <= 9; m++)
		{
			r = n * m;
			if (r < 10)
			{
				if (m != 0)
					_putchar(' ');
				_putchar(r + '0');
			}
				else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
