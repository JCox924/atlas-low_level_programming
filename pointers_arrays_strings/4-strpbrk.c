#include "main.h"
#include "2-strchr.c"

/**
 * _strpbrk - gets first occurance of characters from pointers
 *
 * @s: pointer to string
 *
 * @accept: character to find
 *
 * Return: s if character is found and void if not
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s++))
		{
			return (--s);
		}
	}

	return (0);
}
