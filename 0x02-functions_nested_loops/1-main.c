#include "main.h"

/**
 * main - chesk the code
 *
 * Return: Always 0.
 */
void print_alphabet(void);
int _putchar(char c);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
