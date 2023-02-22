#include "main.h"

/**
 * main - chesk the code
 *
 * Return: Always 0.
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
int main(void)
{
	print_alphabet();
	return(0);
}
