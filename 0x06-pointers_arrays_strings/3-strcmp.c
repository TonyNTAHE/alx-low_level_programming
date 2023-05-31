#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if both strings are equal.
 *         15 if first string is greater than second string.
 *         -15 if first string is less than second string.
 */
int _strcmp(char *s1, char *s2)
{
int i;
int f = 0;

for (i = 0; s1[i] || s2[i]; i++)
{
if (s1[i] == s2[i])
{
f = 1;
}
else if (s1[i] > s2[i])
{
return (15);
}
else if (s1[i] < s2[i])
{
return (-15);
}
}
if (f == 1)
{
return (0);
}
return (0);
}
