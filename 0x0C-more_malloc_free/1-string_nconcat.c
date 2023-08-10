#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - concatenates two strings with n value
 * for the second value
 * @s1: string 1 ( begining)
 * @s2: string 2 ( second string)
 * @n: lenght of string input from s2
 * Return: a pointer to the allocated memory or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	unsigned int i = 0, j = 0, k = 0, l = 0, limit;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	a = malloc((i + n + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		a[k] = s1[k];
	if (n >= j)
		limit = j;
	else
		limit = n;
	for (l = 0; l <= limit; k++, l++)
		a[k] = s2[l];
	return (a);
}
