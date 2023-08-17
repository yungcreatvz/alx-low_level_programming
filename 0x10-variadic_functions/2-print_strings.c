#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @n: number of given input
 * @separator: separator between input
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sl;
	char *str;
	unsigned int i;

	va_start(sl, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(sl, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(sl);
}
