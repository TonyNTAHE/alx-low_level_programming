#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times,
 * in lowercase, followed by a new line.
 *
 * Return: nothing.
 */
void print_alphabet_x10(void)
{
	int a = 0;
	char b = 'a';

	while (a <= 9)
	{
		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}
		b = 'a';
		_putchar('\n');
		a++;
	}
}
