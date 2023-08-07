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
	a = malloc((i + 1)  * sizeof(char);
	if (a == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
	{
		a[j] = str[j];
	}

	return (a);
}

