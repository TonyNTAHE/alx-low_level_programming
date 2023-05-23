#include "main.h"

/**
 * times_table - prints time table.
 *
 * Return: 0.
 */
void times_table(void)
{
	int i = 0;
	int j = 0;
	int r = 1;

	while (i <= 9)
	{
		while (j <= 9)
		{
			r =  i * j;
			if (j == 0)
			{
				_putchar(48);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (r >= 10)
				{
					_putchar((r / 10) + 48);
					_putchar((r % 10) + 48);
				}
				else
				{
					_putchar(' ');
					_putchar(48 + r);
				}
			}
			j++;
		}
		j = 0;
		_putchar('\n');
		i++;
	}
}
