#include "main.h"


/**
 * create_file - creates a file
 *
 * @filename: name of the file to be created
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success. -1 otherwise.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t res;
	size_t len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
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
