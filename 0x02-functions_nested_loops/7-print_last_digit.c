#include <stdio.h>
#include "main.h"

/**
 * print_last_digit  - print last number of input
 * @n: value  input
 * followed by a new line
 * Return: int last digit of a var n
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
