#include "main.h"

/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: nothing.
 */
void more_numbers(void)
{
	int i = 1;
	int j = 0;

	while (i <= 10)
	{
		while (j < 15)
		{
			if (j >= 10)
			{
				_putchar('0' + (j / 10));
			}
			_putchar((j % 10) + '0');
			j++;
		}
	j = 0;
_putchar('\n');
i++;
	}
}
