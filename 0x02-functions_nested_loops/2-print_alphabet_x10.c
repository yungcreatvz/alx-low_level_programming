#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Print Print alphabet 10x function
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char a, i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
