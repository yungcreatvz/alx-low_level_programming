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
	putchar('\n');
	return (0);
}
