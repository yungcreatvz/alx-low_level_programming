#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print Alphabet
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		if (a != 57)
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
