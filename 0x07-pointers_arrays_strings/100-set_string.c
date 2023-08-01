#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: src to use
 * @to: paste destination
 */
void set_string(char **s, char *to)
{
	*s = to;
}
