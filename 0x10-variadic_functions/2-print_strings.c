#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: separator.
 * @n: number of argument passed.
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *c;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(list, char *);
		if (c)
		{
			printf("%s", c);
		}
		else
			printf("(nil)");
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
