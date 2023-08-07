#include 'main.h'

/**
 * create_array -  creates an array of chars, and initializes it with a specific char
 * @size: lenght off the array
 * @c: charter to initiallizze
 * Return: Null if size is 0 or table of array 
 */
char *create_array(unsigned int size, char c)
{
	int len = malloc(size * sizeof(char));
	char arr[len];

	if (size == 0)
		return (NULL);
	arr[0] = c;
	return (arr);
	
}

