#include "main.h"

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: 0.
 */
int main(void)
{
	long int number = 612852475143;
	long int primeN = 2;

	while (number > 1)
	{
		while (number % primeN == 0)
		{
			number = number / primeN;
		}
		primeN++;
	}
	printf("%ld\n", primeN - 1);
	return (0);
}
