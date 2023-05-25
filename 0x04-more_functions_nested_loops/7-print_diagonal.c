#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: integer.
 * Return: nothing.
 */
void print_diagonal(int n)
{
	int j = 0;
	int i = 0;

	while (i < n)
	{
		while (j < n)
		{
			putchar(' ');
			j++;
		}
		if (i < (n - 1))
		putchar('\\');
		i++;
		putchar('\n');
	}
}
