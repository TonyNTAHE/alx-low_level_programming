#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: the name of the file to be created.
 * @text_content: NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes;
	size_t len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (0);
	}
	if (len > 0)
	{
		bytes = write(fd, text_content, len);
		if (bytes != (int)len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
