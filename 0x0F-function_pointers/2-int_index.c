#include "function_pointers.h"

/**
 * int_index - searches for integer.
 * @array: array.
 * @size: size of the array.
 * @cmp: pointer to function to be used.
 * Return: -1 if no element matches
 *          -1 if size<= 0.
 *          index where the element is found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
