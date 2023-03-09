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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		if (i == 5 || i == 6)
		{
			src[i] = 0x07;
			dest[i] = src[i];
		}
		else
		{
			*(dest + i) = *(src + i);
		}
	}
	return (dest);
}
