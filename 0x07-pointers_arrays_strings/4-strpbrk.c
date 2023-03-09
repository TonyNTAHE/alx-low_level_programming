#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s:pointer to the string 
 * @accept: pointer to string.
 *
 * Return: Null if no such byte is found and s if it maches
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
	return(0);
}
