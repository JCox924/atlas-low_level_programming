#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - Frees the memory allocated to dog_t structs
 *
 * @d: poiner to struct
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}

		if (d->owner != NULL)
		{
			free(d->owner);
		}
	free(d);
	}
}
