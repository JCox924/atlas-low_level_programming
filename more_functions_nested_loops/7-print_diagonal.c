#include "main.h"

/**
  * print_diagonal- Draws diagonal lines given certian number of empty spaces
  * @n: The number of times to print diagonal lines
  *
  * Return: void
  */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)

		{
			int j;

			for (j = 0; j < i; j++)

			{
				_putchar(32);
			}

			_putchar(92);
			_putchar('\n');
		}
	}
}
