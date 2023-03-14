#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: character to check
 * Return: 1 if c is uppercase
 *         0 otherwise
 */
int _isupper(int c)
{
	while (c >= 'A' && c <= 'Z')
	{
		return (1);
		c++;
	}
		return (0);
}
