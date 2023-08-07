#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: the file to read from.
 * @letters: is the number of letters it should read and print
 * Return: number of letters it could read and print.
 *         0 if filename is NULL
 *         0 if the file can not be opned
 *         0 if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[255];
	int fd;
	ssize_t nread, nwrite, sum = 0;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	while ((nread = read(fd, buffer, sizeof(buffer))) > 0)
	{
		nwrite = write(STDOUT_FILENO, buffer, nread);
		if (nwrite == -1)
		{
			close(fd);
			return (0);
		}
		sum = sum + nwrite;
		if (sum >= letters)
			break;
	}
	close(fd);
	return (sum);
}
