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

	for (a = 48; a < 57; a++)
	{
		for (b = a ++; b <= 57; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
				if (a != 56 || b != 57)
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
