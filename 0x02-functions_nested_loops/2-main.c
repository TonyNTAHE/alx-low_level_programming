#include "main.h"

/**
 * main - check codes
 *
 * Return: 0
 */
int _putchar(char c);
void print_alphabet_x10(void)
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
int main(void)
{
	print_alphabet_x10();
	return (0);
}
