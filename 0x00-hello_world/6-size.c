#include <stdio.h>

/**
 * main - print size of all var type
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char beg = "Size of a";
	char end = "byte(s)";

	printf("%s char: 1 %s\n", beg, end);
	printf("%s int: 4 %s\n", beg, end);
	printf("%s long int: 4 %s\n", beg, end);
	printf("%s long long: 8 %s\n", beg, end);
	printf("%s float: 4 %s\n", beg, end);
	return (0);
}
