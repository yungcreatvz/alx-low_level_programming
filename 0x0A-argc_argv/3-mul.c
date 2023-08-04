#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of parameters
 * @argv: array of given parameters
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n", argv[i]);
		return (1);
	}
	printf("%d\n", argv[1] * argv[2]);

	return (0);
}
