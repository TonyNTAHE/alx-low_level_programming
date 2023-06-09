#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int len = strlen(dest);
while (src[i])
{
dest[len] = src[i];
len++;
i++;
}
dest[len] = '\0';
return (dest);
}
