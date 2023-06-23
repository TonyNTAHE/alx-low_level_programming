#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: a separator.
 * @n: number of integers passed to functions.
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list To;

	va_start(To, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(To, int);
		printf("%d", x);
		if (i < n - 1)
		{
			printf("%s ", separator);
		}
	}
	printf("\n");
}

