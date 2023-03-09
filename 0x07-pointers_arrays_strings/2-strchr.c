#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: pointer to the character or byte.
 * @c: the character that we want to point to.
 * Return: s or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
