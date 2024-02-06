#include "main.h"

/**
 * puts_half - prints second half of a string
 *
 * @str: pointer to string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, len = 0, start;

	i = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	start = len % 2 == 0 ? (len / 2) : ((len / 2) + 1);

	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
