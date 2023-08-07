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
	char *buffer;
	int fd;
	ssize_t nread, nwrite;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc((letters) * sizeof(char *));
	if (buffer == NULL)
		return (0);
	nread = read(fd, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);
	close(fd);
	free (buffer);
	return (sum);
}
