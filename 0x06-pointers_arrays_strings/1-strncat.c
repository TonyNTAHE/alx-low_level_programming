#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int len = strlen(dest);
while (i < n && src[i])
{
dest[len] = src[i];
len++;
i++;
}
dest[len] = '\0';
return (dest);
}
