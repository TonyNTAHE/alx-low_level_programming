#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if both strings are equal.
 *         (+) num if first string is greater than second string.
 *         (-) num if first string is less than second string.
 */
int _strcmp(char *s1, char *s2)
{
int i;
int f = 0;

for (i = 0; (s1[i] || s2[i]); i++)
{
f = s1[i] - s2[i];
if (f != 0)
break;
}
return (f);
}
