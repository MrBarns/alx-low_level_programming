#include "main.h"


/**
 * append_text_to_file - appends text at the end of a file if file exists
 *
 * @filename: path to file
 * @text_content: NULL terminated string to append to file
 *
 * Return: 1 on success, -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (!text_content)
		text_content = "";

	for (len = 0; text_content[len]; len++)
		;
	len = write(fd, text_content, len);
	close(fd);
	if (len < 0)
		return (-1);

	return (1);
}
