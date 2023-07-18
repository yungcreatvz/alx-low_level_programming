#include <stdio.h>
#include "main.h"

/**
 * sign  - Print check lowercase
 * @n: character input
 * followed by a new line
 * Return: 0 ( is zero) 1 (is positive) -1 (is negative
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
