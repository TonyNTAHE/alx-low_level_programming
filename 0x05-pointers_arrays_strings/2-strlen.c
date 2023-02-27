#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: the pointer
 *
 * Return: number od character of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
