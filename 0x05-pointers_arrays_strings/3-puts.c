#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stout.
 * @str: pointer to a string to print
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int count = 0;

	while (str[count])
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
