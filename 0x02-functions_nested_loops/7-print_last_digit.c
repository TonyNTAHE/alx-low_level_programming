#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_d;

	last_d = n % 10;

	if (last_d < 0)
	{
		last_d *= -1;
	}
	printf("%d", last_d);
	return (last_d);
}
