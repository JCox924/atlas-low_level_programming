#include "main.h"

#define BUFFER_SIZE 1024

/**
*close_fd - closes file
*
*@fd - file to close
*
*Return: void
*/

void close_fd(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
*main - implementation function
*
*@argc: arg count
*
*@argv: arg vector
*
*Return: 97,98,99,100 if error, 0 if worked
*/

int main(int argc, char *argv[])
{
	int fd_1, fd_2;
	ssize_t nread, nwrite;
	char buffer[BUFFER_SIZE];
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_2 < 0)
	{
		close_fd(fd_1);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((nread = read(fd_1, buffer, BUFFER_SIZE)) > 0)
	{
		nwrite = write(fd_2, buffer, nread);
		if (nwrite != nread)
		{
			close_fd(fd_1);
			close_fd(fd_2);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (nread < 0)
	{
		close_fd(fd_1);
		close_fd(fd_2);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_fd(fd_1);
	close_fd(fd_2);
	return (0);
}
