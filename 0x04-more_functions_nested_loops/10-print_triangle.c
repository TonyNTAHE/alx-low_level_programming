#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: the size of the triangle.
 *
 * Return: nothing.
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (k = size; k >= i; k--)
			_putchar(' ');
		for (j = 1; j <= i; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
