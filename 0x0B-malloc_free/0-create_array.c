#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: lenght off the array
 * @c: charter to initiallizze
 * Return: Null if size is 0 or table of array
 */
char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *arr;

	arr = malloc(size * sizeof(char));
	if (size == 0 || arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[size - 1] = '\0';
	return (arr);
}

