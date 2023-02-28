#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: first pointer
 * @src: second pointer
 *
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len2 = strlen(src);
	int i;

	for (i = 0; i <= len2; i++)
	{
		char temp = src[i];

		dest[i] = temp;
	}
	return (dest);
}
