#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: pointer.
 * @c: character in the string.
 * Return: a pointer to the first occurence of the character
 *         c in the string s, or NULL if the character is not found.
 *         NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
{
return (s++);
}
s++;
}
return (s++);
return ('\0');
}
