#include "main.h"

/**
 * main - Print Put char
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar";
	int i;
	
	for(i = 0; i < 8 ; i++) 
		_putchar(text[i]);
	return (0);
}
