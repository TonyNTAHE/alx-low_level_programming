#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: nothing
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			printf("%2d", c);
			if (b != 9)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
