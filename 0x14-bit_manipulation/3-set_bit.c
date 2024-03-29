#include "main.h"

/**
 * set_bit - the function that sets the value of a bit to 1 at given index.
 * @n: pointer number.
 * @index: the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = (sizeof(unsigned long int) * 8 - 1);

	if (index >= sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}
	mask = 1 << index;
	*n |=  mask;
	return (1);
}
