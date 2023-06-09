#include "main.h"

/**
 * _strstr - find the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: string.
 * Return: pointer to the beginning of located substring or
 * NULL if the subdtring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int j;

for (i = 0; haystack[i]; i++)
{
for (j = 0; needle[j]; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (!needle[j])
return (haystack + i);
}
return (NULL);
}
