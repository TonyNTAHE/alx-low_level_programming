#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output.
 * @filename: pointer to the file name.
 * @letters: number of characters.
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	ssize_t c_read, c_write;
	char *s;

	if (filename == NULL)
		return (0);
	f = fopen(filename, "r");
	if (f == NULL)
		return (0);
	s = malloc(sizeof(char) * letters);
	if (s == NULL)
	{
		fclose(f);
		return (0);
	}
	c_read = fread(s, sizeof(char), letters, f);
	c_write = write(STDOUT_FILENO, s, c_read);
	free(s);
	fclose(f);
	if (c_write != c_read)
	{
		return (0);
	}
	return (c_read);
}
