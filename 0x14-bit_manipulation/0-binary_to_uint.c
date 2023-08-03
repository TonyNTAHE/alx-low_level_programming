#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to string of 0 and 1 chars
 * Return: the converted number
 *         otherwise 0 if there is one more chars in the string b that is not
 *         0 or 1
 *         or 0 if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		else
			result = (result << 1) | (*b - '0');
		b++;
	}
	return (result);
}
