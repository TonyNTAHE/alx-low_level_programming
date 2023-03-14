#include "main.h"

/**
 * _strcat - concatenates @dest and @src
 * @dest: Destination string to concatenated upon
 * @src: Source string to append to @dest
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
