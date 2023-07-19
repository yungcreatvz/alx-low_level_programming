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
	int j, m, r, k;

	for (j = 0; j <= n; j++)
	{
		for (m = 0; m <= n; m++)
		{
			r = j * m;
			if (r < 10)
			{
				if (m != 0)
				{

					for (k = 0 ; k < 3; k++)
						_putchar(' ');
				}
				_putchar(r + '0');
			}
				else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			if (m != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
