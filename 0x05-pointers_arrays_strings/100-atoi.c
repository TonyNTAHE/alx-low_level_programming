#include "main.h"

/**
 * _atoi - convert string to an integer.
 * @s: string to convert.
 * Return: 0 if there is no number in the string.
 */

int _atoi(char *s)
{
int sign = 1;
int f = 0;
int d = 0;
int r = 0;
int i = 0;

if (s == NULL)
return (0);
while (s[i])
{
if (s[i] == '-' || s[i] == '+')
{
if (f)
break;
if (s[i] == '-')
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
f = 1;
d = s[i] - '0';
if (r > (INT_MAX - d) / 10)
{
if (sign == 1)
{
return (INT_MAX);
}
else
return (INT_MIN);
}
r = r * 10 + d;
}
else if (f)
{
break;
}
i++;
}
return (r * sign);
}
