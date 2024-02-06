#include "main.h"
#include "2-strlen.c"

/**
 * _strncat - concats a string a certain number of times
 *
 * @dest: pointer to destination
 *
 * @src: pointer to string
 *
 * @n: number of times to concat
 *
 * Return: concatenated strings
 */

char *_strcat(char *dest, char *src)
{
        int i, d_len, s_len;

        d_len = _strlen(dest);
        s_len = _strlen(src);

        for (i = 0; i < n && src[i] != '\0'; i++)
        {
                dest[d_len + i] = src[i];
        }

        dest[d_len + s_len] = '\0';

        return (dest);
}
