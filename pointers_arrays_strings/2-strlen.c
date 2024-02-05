#include "main.h"
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
	return s - i;
}
