#include "main.h"
#include <stdlib.h>


/*
 * _strlen - length of string
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
