#include "3-calc.h"

/**
 * get_op_func - returns a pointer to the function that corresponds
 * to the operator given as a parameter.
 * @s: operator passed as argument to the program.
 * Return: pointer to the function.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[i].op)
	{
		if (s[0] == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
