#include "main.h"

/**
 * _strspn - the length of prefix substring.
 * @s: Pointer to the first string.
 * @accept: Pointer to the second string.
 * Return: number of number of bytes in the initial
 * segment of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			return (i);
	}
	return (i);
}
