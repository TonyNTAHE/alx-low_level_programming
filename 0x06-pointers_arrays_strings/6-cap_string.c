#include <stdio.h>

/**
 * cap_string - convert string to uppercase.
 * @s: string.
 * Return: converted string.
 */
char *cap_string(char *s)
{
int i = 0;
int j;
int sep[] = {44, 59, 46, 33, 63, 34, 40, 41, 123, 125, 9, 10, 32};
int n = sizeof(sep) / sizeof(sep[0]);
while (s[i])
{
j = 0;
while (j < n)
{
if (s[i] == sep[j])
{
if (s[i + 1] >= 97 && s[i + 1] <= 122)
{
s[i + 1] -= 32;
}
}
j++;
}
i++;
}
return (s);
}
