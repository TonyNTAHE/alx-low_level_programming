#include "main.h"

/**
 * print_alphabet - printd the alphabet, in lowercase, followed by a new line.
 *
 * Return: nothing.
 */
void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
