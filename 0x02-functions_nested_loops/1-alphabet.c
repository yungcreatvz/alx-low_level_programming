#include <stdio.h>
#include "main.h"

/**
 * main - Print Print alphabet function
 * followed by a new line
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
        char a;

        for (a = 'a'; a <= 'z'; a++)
                _putchar(a);
        _putchar('\n');
        return;
}
