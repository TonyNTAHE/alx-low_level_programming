#include<stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e,
 * followed by a new line
 *
 * Return: 0.
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		if (b != 'e' && b != 'q')
			putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
