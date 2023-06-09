#include "main.h"

/**
 * _strlen - find length of a string.
 * @s: string.
 * Return: length.
 */
int _strlen(char *s)
{
unsigned int count = 0;
while (*s)
{
count++;
s++;
}
return (count);
}
