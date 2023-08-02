#include "main.h"

/**
 * _puts_recursion - prints a string in reverse.
 * @s: string to print
 * Return: rev string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		puts(*s);
	}
}