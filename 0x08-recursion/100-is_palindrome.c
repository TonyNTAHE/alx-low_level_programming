#include "main.h"

/**
 * is_palindrome - use check_palm to find that a string is palindrome.
 * @s: string to check.
 * Return: 1 if the string is a palindrome.
 */
int is_palindrome(char *s)
{
int len = strlen(s);
if (len == 0 || len == 1)
{
return (1);
}
else
return (check_palm(s, 0, len - 1));
}

/**
 * check_palm - check if a string if it is palindrome.
 * @s: string to ckeck.
 * @i: iterator through the string.
 * @j: iterator through the string.
 * Return: 1 if string is a palindrome
 *         0 otherwise
 */
int check_palm(char *s, int i, int j)
{
if (i >= j)
{
return (1);
}
else if (s[i] == s[j])
{
return (check_palm(s, i + 1, j - 1));
}
else
return (0);
}
