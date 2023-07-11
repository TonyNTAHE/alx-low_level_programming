#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get
 * from one number to another.
 * @n: first number.
 * @m: second number.
 * Return: number of bits needed to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	size_t count = 0;

	while (res != 0)
	{
		if (res & 1)
		{
			count++;
		}
		res >>= 1;
	}
	return (count);
}
