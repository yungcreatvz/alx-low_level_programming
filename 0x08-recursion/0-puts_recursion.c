#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 * Return: next string or 1 at end of strings
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
		puts('\n');
		return;
	puts(*s);
	puts('\n');
	_puts_recursion(s + 1);
}
