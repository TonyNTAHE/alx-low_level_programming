#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory allocated previously.
 * @old_size: the old size in byte allocated previously.
 * @new_size: the new size needed to be allocated.
 * Return: pointer to the reallocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *s;
	unsigned int min_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	s = malloc(new_size);
	if (s != NULL)
	{
		if (old_size > new_size)
		{
			min_size = old_size;
		}
		else
		{
			min_size = new_size;
		}
	}
	memcpy(s, ptr, min_size);
	return (s);
}
