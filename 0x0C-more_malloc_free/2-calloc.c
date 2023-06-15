#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: elements in the array.
 * @size: size of the element.
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i, j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = nmemb * size;
	p = malloc(j);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		*((char *)p + i) = 0;
	}
	return (p);
}
