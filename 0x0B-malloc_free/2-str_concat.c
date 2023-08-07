#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Null if fail or pointer if success
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, len, k = 0, l = 0;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s1[j] != '\0')
		j++;
	len = i + j;
	a = malloc((len + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		a[k] = s1[k];
	for (l = 0; l <= j; k++, l++)
		a[k] = s2[l];

	return (a);
}

