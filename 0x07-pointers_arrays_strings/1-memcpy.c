#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointer to destination area.
 * @src: pointer to source area.
 * @n: number of bytes.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0, index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
