#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_mod(int a, int b)
{
	return (a % b);
}
int op_div(int a, int b)
{
	return (a / b);
}

typedef struct op
{
	char *op;
	int (*f) (int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;
	while (ops[i].op)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
int main(int argc, char **argv)
{
	int num1,  num2;
	int (*operation)(int, int);

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && argv[3] == 0)
	{
		printf("Error\n");
		exit(99);
	}
	operation = get_op_func(argv[2]);
	if (operation == NULL)
	{
		printf("Error\n");
		exit(100);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(100);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
			printf("%d\n", operation(num1, num2));
			return (0);
			}

