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
	char a;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
		if (a != '9')
			putchar(',');
	putchar('\n');
	return (0);
}
