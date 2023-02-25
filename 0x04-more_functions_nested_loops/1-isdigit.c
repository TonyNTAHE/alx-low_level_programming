#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: Integer
 *
 * Return: 1 if c is a digit
 *         0 otherwise
 */
int _isdigit(int c)
{
	while (c >= '0' && c <= '9')
	{
		return (1);
		c++;
	}
	return (0);
}
