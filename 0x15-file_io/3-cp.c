#include "main.h"



/**
 * err0 - prints arguments error
 *
 * Return: void
 */

void err0(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}


/**
 * err1 - prints file_from error
 * @filename: name of file
 *
 * Return: void
 */

void err1(char *filename)
{
	dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", filename);
	exit(98);
}


/**
 * err2 - prints file_to error
 * @filename: name of file
 *
 * Return: void
 */

void err2(char *filename)
{
	dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", filename);
	exit(99);
}


/**
 * _close - prints close() error
 * @fd: file descriptor
 *
 * Return: void
 */

void _close(int fd)
{
	int res;

	res = close(fd);
	if (res < 0)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - copies the contents of a file to another file
 *
 * @argc: number of arguments
 * @argv: vector of arguments
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	char buf[1024];
	int fd_from, fd_to;
	ssize_t res;

	if (argc != 3)
		err0();

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
		err1(argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_APPEND | O_TRUNC | O_CREAT, 00664);
	if (fd_to < 0)
	{
		_close(fd_from);
		err2(argv[2]);
	}
	for (res = read(fd_from, buf, 1024); res;
	     res = read(fd_from, buf, 1024))
	{
		if (res < 0)
		{
			_close(fd_from);
			_close(fd_to);
			err1(argv[1]);
		}
		res = write(fd_to, buf, res);
		if (res < 0)
		{
			_close(fd_from);
			_close(fd_to);
			err2(argv[2]);
		}
	}
	return (0);
}
