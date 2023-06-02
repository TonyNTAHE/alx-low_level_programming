#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer.
 * Return: nothing.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	if (n >= 1 && n <= 9)
	{
		_putchar(n + '0');
	}
	else if (n >= 10 && n <= 99)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar('0' + n / 100);
		_putchar('0' + n / 10 % 10);
		_putchar('0' + n % 10);
	}
	else if (n >= 1000 && n <= 9999)
	{
		_putchar('0' + (n / 1000));
		_putchar('0' + ((n / 100) % 10));
		_putchar ('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else if (n == 0)
	{
		_putchar(48);
	}
}
