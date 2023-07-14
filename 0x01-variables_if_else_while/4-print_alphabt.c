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

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
			putchar(a);
	}
	putchar('\n');
	return (0);
}
