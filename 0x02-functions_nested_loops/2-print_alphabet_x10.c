#include "main.h"

/**
 * print_alphabet_10x - Prints 10 times the alphabet
 *
 * Return: nothing
 */
int _putchar(char c);
void print_alphabet_10x(void)
{
	char ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
