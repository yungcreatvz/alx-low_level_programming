#include "main.h"

/**
 * _puts - print a new string to stdout
 * @str: first received value
 * followed by a new line
 */
void _puts(char *str)
{
	write(1, *str, 1);
}
