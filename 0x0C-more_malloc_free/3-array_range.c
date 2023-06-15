#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum element.
 * @max: maximum element.
 * Return: pointer to the allocated memory space for the array.
 *         NULL if min > max
 *         NULL is malloc failed.
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(*p) * (max - min + 1));
	for (i = 0; i <= max - min; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
