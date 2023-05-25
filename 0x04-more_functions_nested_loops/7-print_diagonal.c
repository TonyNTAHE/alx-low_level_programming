#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: integer.
 * Return: nothing.
 */
void print_diagonal(int n)
{
	int i = 1;
	int j = 1;

	if (n <= 0)
	{
		putchar('\n');
		return;

	}
	while (i <= n)
	{
		while (j < i)
		{
			putchar(' ');
			j++;
		}
		j = 1;
		putchar(92);
		putchar('\n');
		i++;
	}
}
