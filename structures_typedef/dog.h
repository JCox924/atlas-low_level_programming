#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure named dog with the following,
 *
 * @name: pointer to dog's name
 *
 * @age : age of dog
 *
 * @owner: pointer to owners name
 */

struct dog
{
	char *name;

	float age;

	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
