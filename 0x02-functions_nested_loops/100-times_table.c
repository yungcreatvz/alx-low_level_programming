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

	if (n >= 0 && n < 15)
	{
		for (j = 0; j <= n; j++)
		{
			for (m = 0; m <= n; m++)
			{
				r = j * m;
				for (k = 100; r > 0; k /= 10)
				{
					if ((r / 100) > 0)
					{
						_putchar((r / 100) + '0');
						r = (r % 100);
					}
					else
						_putchar(' ');
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
}
