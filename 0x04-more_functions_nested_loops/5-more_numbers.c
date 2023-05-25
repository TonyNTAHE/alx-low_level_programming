#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, 
 * from 0 to 14, followed by a new line.
 *
 * Return: nothing.
 */

void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
			{
				_putchar('0' + (b / 10));
				_putchar('0' + (b % 10));
			}
			else
				_putchar('0' + b);
		}
		_putchar('\n');
	}
}
