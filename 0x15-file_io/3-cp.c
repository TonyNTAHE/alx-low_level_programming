#include "main.h"

/**
 * error - checks if files can be opened.
 * @file1: file to copy from.
 * @file2: file to copy into.
 * @argv: argument vector.
 * Return: no return.
 */
void error(int file1, int file2, char *argv[])
{
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
	}
	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
		exit(98);
	}
}
/**
 * main - copies characters from a file to another.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, c;
	ssize_t nbytes = 1024, bytes;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_form file_to");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error(fd1, fd2, argv);

	while (nbytes != 0)
	{
		nbytes = read(fd1, buffer, 1024);
		if (nbytes == -1)
			error(-1, 0, argv);
		bytes = write(fd2, buffer, nbytes);
		if (bytes == -1)
			error(0, -1, argv);
	}
	c = close(fd1);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd1);
		exit(100);
	}
	c = close(fd2);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
