#include <stdio.h>

/**
 * _strncpy - copies a string.
 * @dest: destination string.
 * @src: source string.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
