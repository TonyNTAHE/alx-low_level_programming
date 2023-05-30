#include "main.h"

/**
 * _atoi - changes ascii to integers
 * @s: string to convert.
 * Return: the converted string.
 */
int _atoi(char *s)
{
int i = 0;
int sign = 1;
int r;
int result = 0;
while (s[i])
{
while (s[i] == '-' || s[i] == '+' || s[i] == ' ')
{
sign = -1;
i++;
}
result = result * 10 + s[i] - '0';
i++;
}
r = (result*sign);
return (r);
}
