#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - A function that creates a new structure
 * @name: Member 1
 * @age: Member 2
 * @owner: Member 3
 *
 * Return: A pointer to the structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newT;
	char *n;
	char *o;

	newT = malloc(sizeof(dog_t));
	if (newT == NULL)
		return (NULL);
	n = name;
	o = owner;
	newT->name = malloc(sizeof(name));
	newT->name = n;
	newT->age = age;
	newT->owner = malloc(sizeof(owner));
	newT->owner = o;

	return (newT);
}
