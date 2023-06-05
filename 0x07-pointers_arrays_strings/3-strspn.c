#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer .
 * @accept: pointer.
 * Return: number of bytes in the initial segment of s
 *          which concist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0, j = 0;
unsigned int len = 0;
while (s[i])
{
while (accept[j])
{
if (s[i] == accept[j])
{
len++;
break;
}
j++;
}
if (!accept[j])
break;
i++;
j = 0;
}
return (len);
}
