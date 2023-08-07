#include "main.h"

/**
 * create_file - function that create a file.
 * @filename: the file's name
 * @text_content: NUll terminated string to write to the file
 * Return: -1 on failure
 *          1 on success.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nwrite;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		nwrite = write(fd, text_content, strlen(text_content));
		if (nwrite == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
