#include "main.h"

/**
 * swap_int - swap value of two given integer
 * @a: first received value
 * @b: second received value
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
