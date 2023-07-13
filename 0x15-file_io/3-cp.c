#include "main.h"

/**
 * main - copy file from one to another.
 * @argc: argument count
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	char *file_from;
	char *file_to;
	int fd1, fd2, bytes_read = 1;
	char buffer[1024];

	if (argc != 3)
	{
		fprintf(stderr, "cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		perror("Error: Can't read from file file_from\n");
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		perror("Error: Can't write to file_to\n");
		exit(99);
	}
	while (bytes_read > 0)
	{
		bytes_read = read(fd1, buffer, sizeof(buffer));
		write(fd2, buffer, bytes_read);
	}
	close(fd1);
	close(fd2);
	return (0);
}
