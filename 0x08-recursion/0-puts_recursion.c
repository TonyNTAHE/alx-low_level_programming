#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a newline.
 * @s: pointer to string.
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
else
putchar(*s);
_puts_recursion(s + 1);
}
