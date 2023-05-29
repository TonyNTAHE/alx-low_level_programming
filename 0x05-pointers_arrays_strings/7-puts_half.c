#include "main.h"

/**
 * puts_half - prits half of a string, followed by a new line.
 * @str: pointer to string.
 * Return: nothing.
 */
void puts_half(char *str)
{
int i;
int len = strlen(str);
int n = (len - 1) / 2;
for (i = n + 1; str[i]; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
