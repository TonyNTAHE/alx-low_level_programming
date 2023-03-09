#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: First string
 * @needle: secong string.
 *
 * Return: a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[i] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return ((needle + i));
			}
		}
	}
	return (NULL);
}
