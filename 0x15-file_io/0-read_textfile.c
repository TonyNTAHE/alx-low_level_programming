#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard.
 * @filename: the file's name.
 * @letters: numbers of letters it should read and print.
 * Return: number of letters it could read and print
 *         0 if filename is NULL
 *         0 if write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t nread, nwrite;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
		return (0);
	nread = read(fd, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);
	if (nwrite == -1)
	{
		close(fd);
		return (0);
	}
	if (nread > nwrite)
		return (0);
	close (fd);
	free(buffer);
	return (nwrite);
}
