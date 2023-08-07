#include "main.h"
/**
 * error_msg - prints error msg and exit..
 * @code: the exit code.
 * @msg:the error message.
 * @filename: The filename causing the error.
 */
void error_msg(int code, const char *msg, const char *filename)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, filename);
	exit(code);
}
/**
 * main - copies the content of a file to another file.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	char buffer[1024];
	int fd1, fd2, i, j;
	ssize_t nread, nwrite;

	if (argc < 3)
		error_msg(97, "Usage: cp file_from file_to", "");
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		error_msg(98, "Error: Can't read from", argv[1]);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		error_msg(99, "Error: Can't write to", argv[2]);
	nread = 1024;
	while ((nread = read(fd1, buffer, sizeof(buffer))) > 0)
	{
		nwrite = write(fd2, buffer, nread);
		if (nwrite == -1)
			error_msg(99, "Error: can't  write to", argv[2]);
	}
	if (nread == -1)
		error_msg(98, "Error: Can't read from", argv[1]);
	i = close(fd1);
	if (i == -1)
		dprintf(STDERR_FILENO, "Can't close fd %d", i);
	j = close(fd2);
	if (j == -1)
		dprintf(STDERR_FILENO, "Can't close fd %d", j);
	return (0);
}
