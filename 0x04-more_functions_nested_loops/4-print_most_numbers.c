#include "main.h"

/**
 * print_most_numbers - printss the numbers, from 0 to 9
 * excepted 2 and 4, followed by a new line.
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 9; n++)
	{
		if (n != 2 && n != 4)
		{
			putchar('0' + n);
		}
	}
	putchar('\n');
}
