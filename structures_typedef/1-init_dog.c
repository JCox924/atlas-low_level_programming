#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
		d->name = strdup(name);
		d->age = age;
		d->owner = strdup(owner);
	}


}


int main(void)
{
	struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
