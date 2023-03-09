#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s:p first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return (0);
}
