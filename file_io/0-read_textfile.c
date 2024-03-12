#include "main.h"

/**
*read_textfile - reads text file and outputs to stdout
*
*@filename: file to be read
*
*@letters:
*
*Return: contents of textfile
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwritten;
	char *buffer;

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
	{
		close(fd);
		return (0);
	}
	nread = read(fd, buffer, letters);

	if (nread == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	nwritten = write(STDOUT_FILENO, buffer, nread);

	if (nwritten == -1 || nwritten < nread)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (nwritten);
}
