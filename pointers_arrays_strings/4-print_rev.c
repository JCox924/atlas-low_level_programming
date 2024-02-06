#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a given string in reverse
 *
 * @s: pointer to string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0, i = 1;

	len = _strlen(s);

	while (i <= len)
	{
		_putchar(s[len - i]);
		i++;
	}

	_putchar('\n');
}
