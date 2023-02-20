#include <string.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
