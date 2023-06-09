#include "main.h"

/**
 * _memcpy - copy memory area.
 * @dest: destination string.
 * @src: source string.
 * @n: number of byte.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int len = strlen (dest);
unsigned int i = 0;
while (i < n && src[i])
{
dest[len + i] = src[i];
i++;
}
return (dest);
}
