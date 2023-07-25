#include "main.h"

/**
 * print_array - print n element off given arran 
 * @a: received array
 * @n: limit index
 * followed by a new line
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if ( i != n -1 )
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		printf("\n");
	}
}
