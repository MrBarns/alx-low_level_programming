#include "main.h"


/**
 * create_file - creates a file
 *
 * @filename: name of the file to create
 * @text_content: Null terminated string to write to file
 *
 * Return: 1 on success, -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t ind = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);

	for (; text_content[ind]; ind++)
		;

	if (!text_content)
		text_content = "";

	ind = write(fd, text_content, ind);
	close(fd);
	if (ind < 0)
		return (-1);

	return (1);
}
