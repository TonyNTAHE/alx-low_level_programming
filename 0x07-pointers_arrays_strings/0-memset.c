#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the memory to fill.
 * @b: character to fill
 * @n: number of bytes
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *t = s;

	while (n--)
	{
		*t++ = b;
	}
	return (s);
}
