#include "main.h"

/**
*create_file - creates a file
*
*@filename: name of file
*
*@text_content: string to write to file
*
*Return: 1 if worked, -1 if error
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0, written;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filenaem, O_CREAT | O_WRONLY | O_TRUNC, S_IRSUR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
		written = write(fd, text_content, len);

		if (written != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
