#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: pointer to destination
 *
 * @src: pointer to string
 *
 * @n: number of times to iterate
 *
 * Return: new string
 */

char *_memcpy(char *dest. char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
