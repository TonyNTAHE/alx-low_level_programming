#include <stdio.h>
#include <stdlib.h>

/**
 * struct op - Struct op.
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/**
 * op_add - add two numbers
 * @a: first number.
 * @b: second number.
 * Return: the sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the differences of a and b.
 * @a: first number
 * @b: second number.
 * Returns: sub.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the multiplication of a and b
 * @a: first number.
 * @b: second number.
 * Return: mul.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the division of a and b.
 * @a: first number.
 * @b: second number.
 * Return: div.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a and b.
 * @a: first number.
 * @b: second number.
 * Return: mod.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
/**
 * get_op_func - returns a pointer to the function that corresponds to
 * operator given as a parameter.
 * @s: operator passed as argument to the program.
 * Return: pointer to function.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div}, {"%", op_mod}, {NULL, NULL}};
	int i = 0;

	while (ops[i].op)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

/**
 * main - main function.
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
	if (argv[2][1])
	{
		printf("Error\n");
	}
	oprt = get_op_func(argv[2]);
	if (oprt == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi (argv[3]);
	printf("%d\n", oprt(num1, num2));
	return (0);
}
