#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter.
 * @str: pointer to string.
 * Return: NULL is str = NULL.
 *         NULL if newly allocated space is insufficeint.
 *         pointer to the newly allocated space in the memory.
 */
char *_strdup(char *str)
{
char *s;
int i = 0, l;
if (str == NULL)
return (NULL);
l = strlen(str);
s = malloc((l + 1) * sizeof(char));
if (s == NULL)
return (NULL);
while (str[i])
{
s[i] = str[i];
i++;
}
s[i] = '\0';
return (s);
}
