#include "main.h"

/**
 * cap_string - convert string to uppercase.
 *@s: string.
 * Return: converted string.
 */
char *cap_string(char *s)
{
int i = 0;
while (s[i])
{
if (s[i] == '.')
{
i = i + 1;
if (s[i] != ' ')
{
if (s[i] >= 97 && s[i] <= 122)
{
s[i] -= 32;
}
}
}
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
{
i = i + 1;
if (s[i] >= 97 && s[i] <= 122)
{
s[i] -= 32;
}
}
i++;
}
return (s);
}
