#include "variadic_functions.h"
#include <stdargs.h>
#include <stdlib.h>

/**
 * print_numbers - 
 *
 * @separtor -
 *
 * @n:
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;

	if (n > 0)
	{
		va_start(args, n);

		while (i < n)
		{
			printf("%d", va_arg(args, int));

			if (i != n - 1 && separator != NULL)
			{
				printf("%d", va_arg(args, int));
				i++;
			}
			va_end(args);
		}

		printf("\n");
	}
}
