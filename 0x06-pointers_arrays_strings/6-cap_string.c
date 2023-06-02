#include <stdio.h>

/**
 * cap_string - convert string to uppercase.
 * @s: string.
 * Return: converted string.
 */
char *cap_string(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] == '.' && s[i + 1] == '\n')
{
if (s[i + 2] >= 97 && s[i + 2] <= 122)
{
s[i + 2] -= 32;
}
}
else if (s[i] == '.')
{
i++;
if (s[i] >= 97 && s[i] <= 122)
{
s[i] -= 32;
}
}
else if (s[i] == '\n' || s[i] == ' ' || s[i] == '\t')
{
if (s[i] == '\t')
s[i] = ' ';
i++;
if (s[i] >= 97 && s[i] <= 122)
{
s[i] -= 32;
}
}
i++;
}
return (s);
}
