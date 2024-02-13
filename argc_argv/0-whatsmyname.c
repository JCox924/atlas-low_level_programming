#include "main.h"
#include <stdio.h>

/**
 * main - prints name of program
 *
 * @argc: argument count
 *
 * @argv: argument vector, string format
 *
 * Return: 0 on success, 1 if no name detected
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		fprintf(stderr, "no name found\n");
		return (1);
	}

	return (0);
}
