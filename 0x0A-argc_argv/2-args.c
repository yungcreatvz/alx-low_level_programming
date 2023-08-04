#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of parameters
 * @argv: array of given parameters
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;
	for (i = 0; argv[i]; i++) 
		printf("%s\n", argv[i]);

	return (0);
}
