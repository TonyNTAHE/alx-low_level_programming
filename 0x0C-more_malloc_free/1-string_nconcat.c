#include "main.h"

/**
 * _strlen - return the length of a string.
 * @str: the string.
 * Return: thr length.
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes.
 * Return: pointer to the allocated memory where the
 *         concatenated string is.
 *         NULL if the program fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	p = malloc((len1 + len2 + 1) * sizeof(p));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	if (n >= len2)
	{
		for (j = 0; j < (len2 + 1); j++)
		{
			p[len1 + j] = s2[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n && s2[j]; j++)
		{
			p[len1 + j] = s2[j];
			i++;
		}
	}
	p[len1 + len2] = '\0';
	return (p);
}
