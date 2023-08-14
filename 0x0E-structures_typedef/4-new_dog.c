#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - get length of a string
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
		l++;
	return (l);
}

/**
 * _strcpy - copy string pointed to by src
 * @dest: paste destinaation
 * @src: string to copy
 * Return: string coppied
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0, l = 0;

	while (src[l] != '\0')
		l++;
	for (; i < l; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog -  create a new dog
 * @name: input for namee case
 * @age: input for age
 * @owner: input got owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lname = _strlen(name), lowner = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (lname + 1));
	if (dog->name == NULL)
		return (NULL);
	dog->owner = malloc(sizeof(char) * (lowner + 1));
	if (dog->owner == NULL)
		return (NULL);
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
