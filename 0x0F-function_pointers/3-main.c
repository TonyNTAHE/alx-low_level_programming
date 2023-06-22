#include "3-calc.h"
#include <stdlib.h>
/**
 * main - implements some calculation on arguments
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	int num1, num2;
	int (*oprt)(int, int);

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	oprt  = get_op_func(argv[2]);
	if (oprt == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", oprt(num1, num2));
	return (0);
}
