#include "main.h"

/**
 * print_alphabet_x10 -  prints 10 times the alphabet,
 *  in lowercase, followed by a new line
 *
 *  Return: nothing
 */
int _putchar(char c);
void print_alphabet_10x(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
