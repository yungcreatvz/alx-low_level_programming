#include <stdio.h>
#include "main.h"

/**
 * _isalpha - Print check lowercase
 * @c: character input
 * followed by a new line
 * Return: 0 (Success) 1 (error)
 */
int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9');
}
