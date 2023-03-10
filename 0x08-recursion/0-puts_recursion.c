#include "main.h"

/**
 * _puts_recursion - prints a string,followed by a new line.
 * @s: pointer to the string we want to print.
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*(s + 0));
		s++;
	}
	_putchar('\n');
}
