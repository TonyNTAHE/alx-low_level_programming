#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number.
 * Return: -1 if n < 0
 *          1 if n == 1.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
else
return (n * factorial(n - 1));
}
