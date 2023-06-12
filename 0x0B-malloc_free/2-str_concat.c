#include "main.h"

/**
 * str_concat - concatenates two string.
 * @s1: first string.
 * @s2: second string.
 * Return: NULL on failure.
 *         pointer should point to a newly allocated
 *         space in memory which contains the contents of s1,
 *         followed by the contents of s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int i = 0, j;
int len1, len2, n;
len1 = strlen(s1);
len2 = strlen(s2);
n = len1 + len2 + 1;
if (s1 == NULL && s2 == NULL)
return (NULL);
s = malloc(n *sizeof(char));
if (s == NULL)
return (NULL);
while (i < len1)
{
s[i] = s1[i];
i++;
}
j = 0;
while (j < len2)
{
s[len1 + j] = s2[j];
j++;
}
s[len1 + len2] = '\0';
return (s);
}
