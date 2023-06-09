#include <stdio.h>

/**
 * _strncpy - copies a string.
 * @dest: destination string.
 * @src: source string.
 * @n: number of bytes.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
/*int len = strlen(dest);*/
while (i < n && src[i])
{
dest[i] = src[i];
i++;
}
for (; i < n; i++)
dest[i] = '\0';
return (dest);
}
