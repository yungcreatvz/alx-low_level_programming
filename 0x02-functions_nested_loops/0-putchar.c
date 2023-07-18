#include "main.h"

/**
 * main - Print Put char
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar";
	
	for(int i = 0; i <strlen(text) ; i++) 
		_putchar(text[i]);
	return (0);
}
