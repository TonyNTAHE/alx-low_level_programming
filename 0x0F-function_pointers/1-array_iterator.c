#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - executes a function given as parameter
 * on each element of an array.
 * @array: the array.
 * @size: element in the array.
 * @action: pointer to the function to be used.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
