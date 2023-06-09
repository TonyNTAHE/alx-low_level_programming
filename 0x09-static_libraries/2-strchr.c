#include "main.h"

/**
 * _strchr - locates character in the string.
 * @s: string.
 * @c: character to locates.
 * Return: pointer to the first occurence of the character.
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i])
{
if (s[i] == c)
{
return (&s[i]);
break;
}
i++;
}
return (NULL);
}
