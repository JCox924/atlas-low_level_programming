#include "main.h"
#include <stdio.h>

/**
 * main - prints arguments
 *
 * @argc: argument counter
 *
 * argv: argument string pointer
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n" , argv[i]);
	}

	return (0);

}
