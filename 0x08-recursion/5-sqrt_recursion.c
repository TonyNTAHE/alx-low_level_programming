#include "main.h"

/**
 * _sqrt_recursion  - returns the natural square root of a number.
 * @n: the number.
 * Return: -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
int s = 1;
return (fun_helper(n, s));
}

/**
 * fun_helper -  help to find the root through comparing s and n.
 * @n: number.
 * @s: number.
 * Return: -1 if n does not have a natural square root.
 *          s.
 */
int fun_helper(int n, int s)
{
if (n == s * s)
{
return (s);
}
else if (s < n)
{
return (fun_helper(n, s + 1));
}
else
return (-1);
}
