#include "main.h"
#include <stdio.h>

/**
 * _strcmp - reverses the content of an array of integers
 * @a: array table to reverse
 * @n: number of element in the array
 */
void reverse_array(int *a, int n)
{
	int temp, i, j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
