#include "main.h"

/**
 * _strlen - return lengh of a string
 * @s: first received value
 * Return: lenght of string input
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
