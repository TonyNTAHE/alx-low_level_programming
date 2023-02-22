#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 * _putchar - print character c to stdout
 * @c: The character to print
 *
 * Return: nothing
 */
int _putchar(char c);
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
