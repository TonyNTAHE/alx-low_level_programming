#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: array of string.
 * Return: converted number
 *         0 if b == NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[1] != '0')
		{
			return (0);
		}
		res = (res << 1) | (b[i] - '0');
	}
	return (res);
}
