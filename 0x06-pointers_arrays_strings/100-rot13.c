#include "main.h"

/**
 * rot13 - encodes string into rot13.
 * @s: string to convert.
 * Return: nothing.
 */
char *rot13(char *s)
{
char *l = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *r = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i = 0, j;
while (s[i])
{
j = 0;
while (l[j] != '\0')
{
if (s[i] == l[j])
{
s[i] = r[j];
break;
}
j++;
}
i++;
}
return (s);
}
