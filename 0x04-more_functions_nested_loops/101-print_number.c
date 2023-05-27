#include "main.h"

/**
 * print_number - prints numbers.
 * @n: number to be printed.
 *
 * Return: nothing.
 */
void print_number(int n)
{
	if (n > 0)
	{
		printf("%d\n", n);
	}
	else if (n == 0)
	{
		printf("%d\n", n);
	}
	else if (n < 0)
	{
		printf("%d", n * (-1));
	}
}

int main(void)
{
	print_number(98);
	/*_putchar('\n');*/
	print_number(402);
	_putchar('\n');
	print_number(1024);
	_putchar('\n');
	print_number(0);
	_putchar('\n');
	print_number(-98);
	_putchar('\n');
	return (0);
}
