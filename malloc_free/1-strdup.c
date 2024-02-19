#include "main.h"
#include <stdlib.h>
#include "mylib.a"

/**
 * _strdup - Returns a pointer to a copied striung in memory
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
	
	free(new_str);

	return (new_str);

}
