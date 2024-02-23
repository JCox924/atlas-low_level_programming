#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - creates a stucture variable named dog
 *
 * @d: pointer to dog
 *
 * @name: pointer to dog name
 *
 * @age: age as a float
 *
 * @owner: pointer to owner name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = (name);
		d->age = age;
		d->owner = (owner);
	}


}


