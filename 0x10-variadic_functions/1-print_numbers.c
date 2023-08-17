#include "variadic_functions.h"

/**
 * print_numbers - Returns the sum of all its parameters
 * @n: number of given input
 * @separator: separator for numbers
 * Return: prints numbers, followed by a new line
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list sl;
	unsigned int i;

	va_start(sl, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(sl, int));
		else if (separator && i == 0)
			printf("%d", va_arg(sl, int));
		else
			printf("%s%d", separator, va_arg(sl, int));
	}
	va_end(sl);
}
