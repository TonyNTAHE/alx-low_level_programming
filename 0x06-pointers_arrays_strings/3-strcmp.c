#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if both strings are equal.
 *         15 if first string is greater than second string.
 *         -15 if first string is greater than second sting.
 */
int _strcmp(char *s1, char *s2)
{
int len1 = strlen(s1);
int len2 = strlen(s2);

if (len1 == len2)
{
return (0);
}
else if (len1 < len2)
{
return (-15);
}
else
return (15);
}      
