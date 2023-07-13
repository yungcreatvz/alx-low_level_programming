#include <stdio.h>

/**
 * main - prints exactly w/ printf or puts
 * text "nd that piece of art is useful`\" - Dora Korpar, 2015-10-19"
 * followed by a new line
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(1, "nd that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
