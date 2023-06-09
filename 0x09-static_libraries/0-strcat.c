#include "main.h"

/**
 * _strcat - concatenates two string.
 * @dest: destination string.
 * @src: source string.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
int len = strlen(dest);
int i = 0;
while (src[i])
{
dest[len + i] = src[i];
i++;
}
return (dest);
}
