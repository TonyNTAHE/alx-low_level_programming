#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: pointer to string to print
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i <= len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
