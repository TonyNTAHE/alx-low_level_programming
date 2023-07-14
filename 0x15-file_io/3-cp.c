#include "main.h"
/**
 * error_msg - displays error messages.
 * @x: first argument.
 * @msg: the message.
 * @ext_code: integer.
 */
void error_msg(int x, const char *msg, int ext_code)
{
	if (x == -1)
	{
		perror(msg);
		exit(ext_code);
	}
}
/**
 * error_file - checks if files can be opened.
 * @f_from: file_from.
 * @f_to: file to.
 * @argv: argument vector.
 * Return: no return.
 */
void error_file(int f_from, int f_to, char *argv[])
{
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s'n", argv[1]);
		exit(98);
	}
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - copies two files.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	ssize_t nchar, nwr;
	int fd1, fd2, c;
	char buffer[1024];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	error_file(fd1, fd2, argv);
	nchar = 1024;
	while ((nchar = read(fd1, buffer, 1024)) > 0)
	{
		nwr = write(fd2, buffer, nchar);
		error_msg(nwr, "Error: Can't write to file_to\n", 99);
	}
	error_msg(nchar, "Error: Can't read the file\n", 98);
	c = close(fd1);
	error_msg(c, "Error: Can't close fd fd1\n", 100);
	c = close(fd2);
	error_msg(c, "Error: Can't close fd fd2\n", 100);
	return (0);
}
