#include "main.h"

/**
 * _strncpy - Copies a string onto another
 *
 * @dest: pointer to destination str
 *
 * @src: pointer to string
 *
 * @n: values to copy in bytes
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; 1 < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
