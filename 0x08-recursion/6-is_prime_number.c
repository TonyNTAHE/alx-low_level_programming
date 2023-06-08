#include "main.h"

/**
 * is_prime_number - use prime_finder to find a prime number.
 * @n: number to check.
 * Return: 0 if n <= 1.
 */
int is_prime_number(int n)
{
int i = 2;
if (n <= 1)
{
return (0);
}
else
return (prime_finder(n, i));
}

/**
 * prime_finder - finds a prime number.
 * @n: number to check.
 * @i: number to check with.
 * Return: 0 if prime is not found.
 *         1 if prime is found.
 */
int prime_finder(int n, int i)
{
if (n == i * i)
{
return (0);
}
else if (i < n)
{
return (prime_finder(n, i + 1));
}
else
return (1);
}
