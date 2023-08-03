#include "main.h"

/**
 * clear_bit - sets the value of a bit 0 at given index.
 * @n: pointer to the number
 * @index:  the index, starting from 0 of the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}
	unsigned long int mask = 1UL << index;
	*n &= ~(mask);
	return (0);
}
