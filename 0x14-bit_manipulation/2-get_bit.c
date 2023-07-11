#include "main.h"

/**
 * get_bit - returns the value of a bit a given index.
 * @n: the number.
 * @index: the index.
 * Return: the value of the bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index, k;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	k = ((n & mask) >> index);
	return (k);
}
