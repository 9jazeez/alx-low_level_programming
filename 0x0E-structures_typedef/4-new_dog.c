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
	newT->name = malloc(_strlen(name) + 1);
	_strcpy(newT->name, name);
	newT->age = age;
	newT->owner = malloc(_strlen(name) + 1);
	_strcpy(newT->owner, owner);

	return (newT);
}

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
		s++;
	return (i);
}

char *_strcpy(char *s, char *s2)
{
	char *st = s;

	while (*s2 != '\0')
	{
		*s = *s2;
		s++;
		s2++;
	}
	*s = '\0';
	return (st);
}
