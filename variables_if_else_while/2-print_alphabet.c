#include <stdio.h>
/**
 * Main - prints all letter of alphabet
 *
 * return: Always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
