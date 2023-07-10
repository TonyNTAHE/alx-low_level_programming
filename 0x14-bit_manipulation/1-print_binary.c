#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number.
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	int flag = 1;
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	for (; mask != 0; mask >>= 1)
	{
		if (n & mask)
		{
			_putchar('1');
			flag = 0;
		}
		else if (!flag)
		{
			_putchar('0');
		}
	}
	if (flag)
	{
		_putchar('0');
	}
}
