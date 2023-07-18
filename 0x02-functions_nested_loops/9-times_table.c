#include <stdio.h>
#include "main.h"

/**
 * times_table  - print 9 times table
 * starting from 0
 * followed by a new line
 * Return: table per line
 */
void times_table(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			r = n * m;
			if (r < 10)
				_putchar(r + '0');
			else
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
