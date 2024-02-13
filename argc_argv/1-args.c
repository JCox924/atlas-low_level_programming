#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments in a program
 *
 * @argc: argument counter
 *
 * @argv: unused
 *
 * Return: always 0
 */

int main(int argc, int **argv __atribute__((unused)))
{
	printf("%d\n" , argc - 1);

	return (0);
}
