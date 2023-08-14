#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog informations
 * @name: name of dog
 * @age: dog age
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* init of functions prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
