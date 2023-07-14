#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Check and return if a number is
 * positive  negative is zero
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	/* your code goes there */
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, l);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	return (0);
}
