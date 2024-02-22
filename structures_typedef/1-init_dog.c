#include "dog.h"
#include <stdlib.h>

/*
 *_strlen - Returns the length of string
 *
 * Description: sub for static libary, return length of string for function
 *
 * @s: pointer to string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	char *i = s;

	while (*s != '\0')
	{
		++s;
	}
	return (s - i);
}

/**
 * _strdup - Returns a pointer to a copied striung in memory
 *
 *_strlen - Returns length of string
 *
 * @str: pointer to string
 *
 * Return: NULL if void, pointer to new string if not
 */

char *_strdup(char *str)
{
	char *new_str;

	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	new_str = malloc(sizeof(char) * (_strlen(str) + 1));

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (; str[i] != '\0'; i++)
	{
		new_str[i] = str[i];
	}

	new_str[i] = '\0';


	return (new_str);

}
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
		d->name = _strdup(name);
		d->age = age;
		d->owner = _strdup(owner);
	}
}
