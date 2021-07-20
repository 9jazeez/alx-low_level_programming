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
	char *s;
	char *s2;

	s = name;
	s2 = owner;


	newT = malloc(sizeof(dog_t));
	if (newT == NULL)
		return (NULL);
	newT->name = s;
	newT->age = age;
	newT->owner = s2;

	return (newT);
}
