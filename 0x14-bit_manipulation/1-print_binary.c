#include "main.h"

/**
 * print_binary - function that prints the binary represenattion of a number.
 * @n: the number to print in binary form.
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	while (mask != 0)
	{
		if (n & mask)
		{
			_putchar(49);
			flag = 1;
		}
		else if (flag)
			_putchar(48);
		mask >>= 1;
	}
	if (!flag)
		_putchar(48);
}
