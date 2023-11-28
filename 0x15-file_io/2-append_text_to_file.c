#include "main.h"


/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success. -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t res;
	size_t len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		for (; text_content[len]; len++)
			;
	}

	if (len)
	{
		res = write(fd, text_content, len);
		close(fd);
		if (res < 0)
			return (-1);
	}
	return (1);
}
