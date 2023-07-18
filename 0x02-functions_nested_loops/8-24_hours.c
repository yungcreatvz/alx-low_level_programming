#include <stdio.h>
#include "main.h"

/**
 * jack_bauer  - print every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * followed by a new line
 * Return: time every second
 */
void jack_bauer(void)
{
	char  h, h2, m, m2;

	for (h = '0'; h <= '2'; h++)
	{
		for (h2 = '0'; h2 <= '3'; h2++)
		{
			for (m = '0'; m <= '5'; m++)
			{
				for (m2 = '0'; m2 <= '9'; m2++)
				{
					_putchar(h);
					_putchar(h2);
					_putchar(':');
					_putchar(m);
					_putchar(m2);
					_putchar('\n');
				}
			}
		}
	}
}
