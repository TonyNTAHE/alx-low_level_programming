#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: the number.
 * Return: 1 and print + if n > 0.
 *         0 and prints + if n = 0.
 *         -1 and prints - if n < 1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
