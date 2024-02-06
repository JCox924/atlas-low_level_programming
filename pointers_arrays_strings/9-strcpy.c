#include "main.h"

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
