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
	char *s1 = name;
	char *s2 = owner;

	newT = malloc(sizeof(dog_t));
	if (newT == NULL)
		free(newT);
	newT->name = malloc(_strlen(name) + 1);
	if (newT->name == NULL)
		free(newT->name);
	_strcpy(newT->name, s1);
	newT->age = age;
	newT->owner = malloc(_strlen(name) + 1);
	if (newT->owner == NULL)
		free(newT->owner);
	_strcpy(newT->owner, s2);

	return (newT);
}

/**
 * _strlen- For counting string
 * @s: String to check length
 *
 * Return: int (length of string)
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
		s++;
	return (i);
}

/**
 * _strcpy - Function like inbuilt strcpy
 * @s: Destination
 * @s2: Source
 *
 * Return: Pointer to destination
 */

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
