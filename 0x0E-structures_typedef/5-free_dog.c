#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Function that free structure malloc memory
 * @d: Memory to be freed
 *
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		free(d);
	}

	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
