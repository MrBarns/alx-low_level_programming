#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: path to file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print, 0 otherwise.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t numChars;
	int fd;
	char *buf;

	if (filename)
	{
		fd = open(filename, O_RDWR);
		if (fd < 0)
			return (0);

		buf = malloc(sizeof(char) * (letters));
		if (!buf)
		{
			free(buf);
			close(fd);
			return (0);
		}

		numChars = read(fd, buf, letters);
		if (numChars < 0)
		{
			close(fd);
			return (0);
		}

		numChars = write(STDOUT_FILENO, buf, numChars);
		close(fd);
		if (numChars < 0)
			return (0);
	}

	return (numChars);
}
