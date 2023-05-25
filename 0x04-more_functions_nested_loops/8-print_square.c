#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of the square.
 *
 * Return: nothing.
 */
void print_square(int size)
{
	int i = 1;
	int j = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i <= size)
	{
		while (j <= size)
		{
			_putchar(35);
			j++;
		}
		j = 1;
		_putchar('\n');
		i++;
	}
}
