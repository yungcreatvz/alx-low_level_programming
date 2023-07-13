#include <stdio.h>

/**
 * main - print size of all var type
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of a int: %zu byte(s)\n"), sizeof(int));
	printf("Size of a long %zu byte(s)\n"), sizeof(long));
	printf("Size of a long long: %zu byte(s)\n", sizeof(long long));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
