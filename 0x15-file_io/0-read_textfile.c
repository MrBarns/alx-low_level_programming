#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: path to file
 * @letters: max number of bytes to be read from text file
 *
 * Return: number of letters read if successful, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t count;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
	{
		free(buf);
		return (0);
	}

	count = read(fd, buf, letters);
	if (count < 0)
	{
		close(fd);
		return (0);
	}

	count = write(STDOUT_FILENO, buf, count);
	close(fd);
	if (count < 0)
		return (0);

	return (count);
}
