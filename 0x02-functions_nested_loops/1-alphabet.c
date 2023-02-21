#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
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
