#include "main.h"


/**
 * close_file - close open file
 * @fd: filename
 *
 * Return: void
 */

void close_file(int fd)
{
	int out;

	out = close(fd);

	if (out < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * file_err - handle file err
 *
 * @status: error number
 * @file: filename
 *
 * Return: void
 */

void file_err(int status, char *file)
{
	switch (status)
	{
	case 98:
		dprintf(STDERR_FILENO
			, "Error: Can't read from file %s\n", file);
		break;
	case 99:
		dprintf(STDERR_FILENO
			, "Error: Can't write to %s\n", file);
		break;
	}

	exit(status);
}

/**
 * main - copies content of a file to another file
 *
 * @argc: number of arguments passed to function from terminal
 * @argv: array of arguments passed to function from terminal
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int fd_frm, fd_to;
	ssize_t len_rd = 1024, len_wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_frm = open(argv[1], O_RDONLY);
	if (fd_frm < 0)
		file_err(98, argv[1]);
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_APPEND | O_TRUNC, 00664);
	if (fd_to < 0)
	{
		close_file(fd_frm);
		file_err(98, argv[2]);
	}

	while (len_rd == 1024)
	{
		len_rd = read(fd_frm, buf, 1024);
		if (len_rd < 0)
		{
			close_file(fd_frm), close_file(fd_to);
			file_err(97, argv[1]);
		}
		len_wr = write(fd_to, buf, len_rd);
		if (len_wr < 0)
		{
			close_file(fd_frm), close_file(fd_to);
			file_err(98, argv[2]);
		}
	}

	close_file(fd_frm), close_file(fd_to);
	return (0);
}
