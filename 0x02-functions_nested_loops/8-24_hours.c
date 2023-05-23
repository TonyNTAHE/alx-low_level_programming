#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: nothing.
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	while (i <= 2)
	{
		while (j <= 9)
		{
			while (k <= 5)
			{
				while (l <= 9)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					l++;
					if (i == 2 && j == 3 && k == 5 && l == 10)
					{
						return;
					}
				}
				k++;
				l = 0;
			}
			k = 0;
			l = 0;
			j++;
		}
		j = 0;
		k = 0;
		l = 0;
		i++;
	}
}
