#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: block of memory.
 * Return: nothing.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr =  malloc(b * sizeof(ptr));
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
