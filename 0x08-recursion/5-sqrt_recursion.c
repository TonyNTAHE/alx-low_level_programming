#include "main.h"

/**
 * find_root - finds natural square root.
 * @num: number.
 * @root: the root to be tested..
 *
 * Return: If the has a natural square root - the square root.
 *         If the number does not have a natural square root - (-1).
 */
int find_root(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (find_root(num, root + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */ 
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
	return (1);

	return (find_root(n, root));
}
