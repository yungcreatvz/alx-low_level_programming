#include <stdio.h>
#include "main.h"

/**
 * main - Print 1 to 100
 * for multiple of 3 print Fizz
 * for multiple of 5 print Buzz
 * for both print FizzBuzz
 * followed by a new line
 * Return: 0 ( success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d", i);
	}
}
