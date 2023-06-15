#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 * @b: block of memory.
 * Return: nothing.
 */
void *malloc_checked(unsigned int b)
{
       	int *ptr;

	ptr =  malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
