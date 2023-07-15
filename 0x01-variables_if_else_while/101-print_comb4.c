#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print comb
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 48; a < 57; a++)
	{
		for (b = a + 1; b <= 56; b++)
		{
			if (a != b)
			{
				for (c = b + 1; c <= 57; c++)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 55 || b != 56 || c != 57 )
					{
						putchar(',');
						putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}
