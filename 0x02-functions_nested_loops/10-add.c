#include <stdio.h>
#include "main.h"

/**
 * add - print 9 times table
 * @a: first number
 * @b: second number
 * starting from 0
 * followed by a new line
 * Return: sum of a and b
 */
int add(int a, int b)
{
	int r = a + b

	_putchar((r / 10) + '0');
	_outchar((r % 10) + '0');
	_putchar('\n');
}
