#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string.
 * Return: encoded string.
 */
char *leet(char *s)
{
char *l = "aeotlAEOTL";
char *r = "4307143071";
int i = 0;
int j;
while (s[i])
{
j = 0;
while (l[j])
{
if (s[i] == l[j])
{
s[i] = r[j];
}
j++;
}
i++;
}
return (s);
}
