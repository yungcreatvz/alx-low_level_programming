#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: charter to initiallizze
 * Return: Null if fail and pointer if success
 */
char *_strdup(char *str)
{
	unsigned int i = 0, j = 0;
	char *a;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	a = malloc(i * sizeof(char) + 1);
	if (i == 0 || a == NULL)
		return (NULL);
	while (str[j] != '\0')
	{
		a[j] = str[j];
	}

	return (a);
}

