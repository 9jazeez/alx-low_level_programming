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

	newT = malloc(sizeof(dog_t));
	if (newT == NULL)
		return (NULL);
	newT->name = name;
	newT->age = age;
	newT->owner = owner;

	return (newT);
}
