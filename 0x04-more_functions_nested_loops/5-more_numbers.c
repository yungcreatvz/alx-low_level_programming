#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Print  number from "0" to "14"
 * followed by a new line
 */
void more_numbers(void)
{
	int i, j;
	
	for(j = 0; j < 10; j++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
