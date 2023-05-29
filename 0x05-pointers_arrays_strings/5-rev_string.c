#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: string
 * Return: nothing.
 */
void rev_string(char *s)
{
int i;
char tmp;
int len = strlen(s);
int n = len / 2;
for (i = 0; i < n; i++)
{
tmp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = tmp;
}
}
