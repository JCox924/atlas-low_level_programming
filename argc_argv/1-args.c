#include "main.h"
#include <stdio.h>

/**
 * main - prints number of arguments in a program
 *
 * @argc: argument counter
 *
 * @argv: argument array pointer
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n" , argc - 1);

	return (0);
}
