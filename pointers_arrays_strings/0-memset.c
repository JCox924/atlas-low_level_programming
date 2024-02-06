#include "main.h"

/**
 * _memset - fills memory with a const byte
 *
 * @s: pointer to string
 *
 * @b: character to replace
 *
 * @n: number of times to iterate
 *
 * Return: new string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
