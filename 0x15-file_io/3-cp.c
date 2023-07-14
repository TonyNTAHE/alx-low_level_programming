#include "main.h"
/**
 * main - copies two files.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int c, w, r;
	int fd1, fd2;
	char buffer[1024];

	if (argc != 3)
	{
		fprintf(stderr, "cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		perror("Error: Can't read from file file_from\n");
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		perror("Error: Can't write to file_to\n");
		exit(99);
	}
	while ((r = read(fd1, buffer, sizeof(buffer))) > 0)
	{
		w = write(fd2, buffer, r);
		if (w == -1)
		{
			perror("Error: Can't write to file_to\n");
			exit(99);
		}
	}
	c = close(fd1);
	if (c == -1)
		perror("Error: Can't close fd fd1\n");
	exit(100);
	c = close(fd2);
	if (c == -1)
		perror("Error: Can't close fd fd2\n");
	exit(100);
	return (0);
}
