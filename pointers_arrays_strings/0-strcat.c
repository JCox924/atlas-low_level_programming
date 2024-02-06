#include "main.h"
#include "2-strlen.c"

/**
 * _strcat - concatenates 2 strings
 *
 * @dest: pointer to destination
 *
 * @src: pointer to string
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, d_len, s_len;

	d_len = _strlen(dest);
	s_len = _strlen(src);

	for (i = 0; i < s_len; i++)
	{
		dest[d_len + i] = src[i];
	}

	dest[d_len + s_len] = '\0';

	return (dest);
}
