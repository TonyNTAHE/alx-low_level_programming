#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX
 * standard output.
 * @filename: the file.
 * @letters: number of character to be readed and printed.
 * Return: 0 if file can not be opened
 *         0 if file is NULL
 *         numbers of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	char *s;
	ssize_t c_read;/* count readed letters*/
	ssize_t c_write; /* count written letters*/

	if (filename == NULL)
		return (0);
	f = fopen(filename, "r");
	if (f == NULL)
	{
		return (0);
	}
	s = malloc(sizeof(char) * letters);
	if (s == NULL)
	{
		fclose(f);
		return (0);
	}
	c_read = fread(s, sizeof(char), letters, f);
	c_write = write(STDOUT_FILENO, s, c_read);
	if (c_write != c_read)
	{
		return (0);
	}
	return (c_read);
}
