#include "main.h"

/**
 * puts - output string and characters.
 * @s: string.
 * Return: nothing.
 */
void _puts(char *s)
{
int i = 0;
while (s[i])
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
