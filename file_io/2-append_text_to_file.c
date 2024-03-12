#include "main.h"

/**
*append_text_to_file - appends text to a file
*
*@filename - name of file
*
*@text_content: string to append
*
*Return: 1 if worked, 0 if error
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = 0, written;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
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
	close(fd);
	return (1);
}
