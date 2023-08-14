#include <stdio.h>
#include "dog.h"

/**
 * print_dog - print a struct dog
 * @d: the struct to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
                d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Age: %d\n", d->age);
	printf("owner: %s\n", d->owner);
	
}
