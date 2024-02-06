#include "main.h"
#include "2-strchr.c"


/**
 *
 * _strspn - length of prefix
 *
 * @s: pointer to string
 *
 * @accept: temp string to write to
 *
 * Return: new string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	while (*s && _strchr(accept, *s++))
	{
		i++;
	}

	return (i);
}
