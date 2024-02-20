#include <stdio.h>

/**
 * main -  prints name of program this was compiled from
 *
 * Return: always source file
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
