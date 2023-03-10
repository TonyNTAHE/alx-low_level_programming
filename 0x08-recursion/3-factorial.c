#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number.
 *
 * Return: -1 if n is lower than 0
 *          1 if n is 1 and 0.
 */
int factorial(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
