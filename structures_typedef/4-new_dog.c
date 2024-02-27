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
	dest[i] = '\0';

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

    dog_t *pound = malloc(sizeof(dog_t));
    int nlen = _strlen(name);
    int olen = _strlen(owner);

    if (name == NULL || owner == NULL)
    {
        return (NULL);
    }
    if (pound == NULL)
    {
        return (NULL);
    }

    pound->name = malloc(sizeof(char) * (nlen + 1));
    if (pound->name == NULL)
    {
        free(pound);
        return (NULL);
    }

    pound->owner = malloc(sizeof(char) * (olen + 1));
    if (pound->owner == NULL)
    {
        free(pound->name);
        free(pound);
        return (NULL);
    }

    _strcpy(pound->name, name);
    pound->name[nlen] = '\0';

    _strcpy(pound->owner, owner);
    pound->owner[olen] = '\0';

    pound->age = age;

    return pound;
}
