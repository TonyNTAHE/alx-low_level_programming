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
	int i;

	for (i = 0; i < src[n]; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
