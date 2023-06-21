#include "function_pointers.h"
#include <stdio.h>

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

/**
 * is_98 - check if a number is equal to 98.
 * @elm: the integer tp check.
 *
 * Return: 0 if false, something else otherwise.
 */
int is_98(int elem)
{
	return (98 == elem);
}

/**
 * is_strictly_positive - check if a number is greater than 0.
 * @elem: the integer to check.
 *
 * Return: 0 if false, something else otherwise.
 */
int is_strictly_positive(int elem)
{
	return (elem > 0);
}

/**
 * abs_is_98 - check if the absolute value of a number is 98.
 * @elem: the integer to check.
 *
 * Return: 0 if false, something else otherwise.
 */
int abs_is_98(int elem)
{
	return (elem == 98 || -elem == 98);
}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
	int index;

	index = int_index(array, 20, is_98);
	printf("%d\n", index);
	index = int_index(array, 20, abs_is_98);
	printf("%d\n", index);
	index = int_index(array, 20, is_strictly_positive);
	printf("%d\n", index);
	return (0);
}

