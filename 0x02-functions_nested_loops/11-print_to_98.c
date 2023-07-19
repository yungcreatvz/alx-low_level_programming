#include <stdio.h>
#include "main.h"

/**
 * print_to_98  - print count to 98
 * @n: number input
 * followed by a new line
 * Return: countdown to 98
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++
		}
	}
}
