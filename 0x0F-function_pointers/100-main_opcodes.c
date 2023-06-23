#include <stdio.h>
#include <stdlib.h>

/**
 * main - generates opcodes of main function.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int num_byts, i;
	unsigned char *opcodes = (unsigned char *)&main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_byts = atoi(argv[1]);
	if (num_byts < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < num_byts; i++)
	{
		printf("%02x ", opcodes[i]);
		if (i != num_byts - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
