#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the file's name
 * @text_content: NULL terminated string to add at the end.
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *f;

	if (filename == NULL)
		return (-1);
	f = fopen(filename, "a");
	if (f == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fputs(text_content, f);
	}
	return (1);
}
