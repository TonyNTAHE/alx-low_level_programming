#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number
 * @index: the index, starting from 0 of the bit you want to get.
 * Return: the value of the bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask = sizeof(unsigned long int) * 8 - 1;

	if (index >= sizeof(unsigned long int) * 8 - 1)
		return (-1);
	mask = 1 << index;
	return ((n & mask) ? 1 : 0);
}
