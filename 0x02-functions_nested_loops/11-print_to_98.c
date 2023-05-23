#include "main.h"

/**
 * print_to_98 - prints numbers up to 98.
 * @n: number input.
 *
 * Return: nothing.
 */
void print_to_98(int n)
{
	int i = n;

	if (i <= 98)
	{
		while (i <= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
			i++;
		}
	}
	else
	{
		while (i >= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
			i--;
		}
	}
	printf("\n");
}
