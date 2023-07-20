#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Print  number from 0 to 9
 * followed by a new line
 * Return: nuber from 0 to 9
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
		_putchar(i + '0')
	_putchar('\n');
}
