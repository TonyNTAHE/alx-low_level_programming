#include <stdio.h>

/**
 * main - prints digits from 0 to 9.
 *
 * Return: 0.
 */
int main(void)
{
	int k = 0;

	do {
		putchar(k + '0');
		k++;
	} while (k <= 9);
	putchar('\n');
	return (0);
}
