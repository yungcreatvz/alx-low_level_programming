#include "main.h"

/**
 * _strlen - return lengh of a string
 * @s: first received value
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
