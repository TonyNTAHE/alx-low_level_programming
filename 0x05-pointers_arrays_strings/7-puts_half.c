#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer tto a string to print
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i; 
	int n, n2;

	n = (len - 1) / 2;
	n2 = n + 1;
	for (i = n2; i <= len - 1; i++)
	{
			_putchar(str[i]);
	}
	_putchar('\n');
}

