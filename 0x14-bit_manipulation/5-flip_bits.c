#include "main.h"

/**
 * flip_bits  - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: frist number.
 * @m: second number.
 * Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned int count = 0;

	res = n ^ m;
	while(res)
	{
		res = res & (res - 1);
		count++;
	}
	return (count);
}
