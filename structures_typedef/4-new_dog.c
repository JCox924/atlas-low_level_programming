#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the lengths of a string
 *
 * @s: pointer to string variable
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
 * _strcopy - copies values pointed by the src pointer to dest
 *
 * @dest: pointer to destination
 *
 * @src: pointer to string
 *
 * Return: dest value
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

/**
 * new_dog - Creates a stucture naemd new_dog
 *
 * @name: pointer to dog name char array
 *
 * @age: age of dog as a float
 *
 *@owner: pointer to owner name char array
 *
 * Return: new_dog structure
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pound;

	int nlen = 0, olen = 0;
	
	if (name != NULL && owner != NULL)
	{
		nlen = _strlen(name);

		olen = _strlen(owner);

		pound = malloc(sizeof(dog_t));

		if (pound == NULL)
		{
			return (NULL);
		}

		pound->name = malloc((sizeof(char)) * (nlen) + 1);

		pound->owner = malloc((sizeof(char)) * (olen) + 1);

		pound->name = _strcpy(pound->name, name);

		pound->age = age;

		pound->owner = _strcpy(pound->owner, owner);

		if (pound->name == NULL)
		{
			free(pound);
			return (NULL);
		}
		if (pound->owner == NULL)
		{
			free(pound);
			return (NULL);
		}
	}
	
	return (pound);
}	
		

			
