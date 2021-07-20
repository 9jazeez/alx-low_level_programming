#include "dog.h"
#include <stdio.h>

/**
 * print_dog- Function that prints a structure
 * @d: Structure to print
 *
 * Return: Void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		;
	else
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (!(d->age))
			d->age = 0.0;
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
