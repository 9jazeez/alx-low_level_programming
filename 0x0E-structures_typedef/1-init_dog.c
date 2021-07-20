#include <stdio.h>
#include "dog.h"

/**
 * init_dog- A function that creates dog members
 * @d: Pointer to struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Dog owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	d->name = name;
	d->age = age;
	d->owner = owner;
}
