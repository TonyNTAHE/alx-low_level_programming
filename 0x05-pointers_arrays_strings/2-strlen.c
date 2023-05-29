#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to string.
 * Return: length.
 */
int _strlen(char *s)
{
int i = 0;
int count = 0;

while (s[i])
{
count++;
i++;
}
return (count);
}
