#include <stdio.h>
#include "main.h"

/**
 * main - prints its name, followed by a new line
 * @argc: number of parameters
 * @argv: array of given parameters
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv[0]);

	return (0);
}
