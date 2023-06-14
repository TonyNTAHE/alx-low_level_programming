#include "main.h"

/**
 * _strlen - return the length of the string.
 * @str: the string.
 * Return: the length.
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
 * argstostr - concatenates two string.
 * @ac: argument count.
 * @av: argument vector.
 * Return: a pointer to the alllocated memory for the concateneted string.
 *         NULL is ac == 0 || av == NULL.
 *         NULL is the program failes.
 */
char *argstostr(int ac, char **av)
{
	int len, total_len, i, j, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		total_len = _strlen(av[i]);
	}
	s = malloc((total_len + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]);
		for (j = 0; j < len; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
