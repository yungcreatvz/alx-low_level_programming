#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: charter to initiallizze
 * Return: Null if fail and pointer if success
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *a;

	if (a == NULL || str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	a = malloc(i * sizeof(char) + 1);
	if (i == 0)
		return (NULL);
	for (j = 0; j < i; j++)
		a[j] = str[j];

	return (a);
}

