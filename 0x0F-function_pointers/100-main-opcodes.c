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
	int num_of_byts, i;
	unsigned char *opcodes = (unsigned char *)&main;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_of_byts = atoi(argv[1]);
	if (num_of_byts < 0)
	{
		printf("Error\n");
		return (2);
	printf("\n");
	}
	for (i = 0; i < num_of_byts; i++)
	{
		printf("%02x ", opcodes[i]);
	}
	printf("\n");
	return (0);
}
