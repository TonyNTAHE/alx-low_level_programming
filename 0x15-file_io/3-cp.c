#include "main.h"
#include <stdarg.h>

/**
 * error_msg  - display error messages.
 * @x: first argument
 * @msg: the message.
 * @ext: integer.
 */
void error_msg(int x, char *msg, int ext, ...)
{
	if (x == -1)
	{
		va_list fmt;

		va_start(fmt, ext);
		dfprint(STDERR_FILENO, msg, fmt);
		va_end(fmt);
		exit(ext);
	}
}
/**
 * main - copies a files into another file.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int fd1, fd2;
	ssize_t nbytes, bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	error_msg(fd1, "Error: Can't read from file %s\n", 98, argv[1]);
	fd2 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	error_msg(fd2, "Error: Can't write to file %s\n", 99, argv[2]);
	while ((bytes = read(fd1, buffer, 1024)) > 0)
	{
		nbytes = write(fd2, buffer, bytes);
		error_msg(nbytes, "Can't write to file %s\n", 99, argv[2]);
		if (nbytes != bytes)
		{
			close(fd2);
			return (-1);
		}
	}
	error_msg(close(fd1), "Error: Can't close fd %d\n", 100, fd1);
	error_msg(close(fd2), "Error: Can't close fd %d\n", 100, fd2);
	return (0);
}
