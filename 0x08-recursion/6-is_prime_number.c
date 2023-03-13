#include <stdio.h>

/**
 * is_prime_number - check if a number is prime number
 * @n: number.
 *
 * Return: 1 if the input integer is prime
 *         0 otherwise.
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
		else
			return (1);
	}
	return (is_prime_number(n));
}
