#include <stdarg.h>
#include "variadic_funtions.h"

/**
 * sum_them_all - eturns the sum of all its parameters
 * @n: number of given input
 * Return: sum of given paramms oor 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sl;
	int sum = 0, i = 0; 

	if (n == 0)
		return (0);
	va_start(sl, n);
	for (i = 0; i < n, i ++)
		sum += va_arg(sl, int);
	va_end(sl);
	return (sum);
	
}
