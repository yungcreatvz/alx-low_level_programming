#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  initialize a variable of type struct dog
 * @d: the strut to fill
 * @name: input for namee case
 * @age: input for age
 * @owner: input gott owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
