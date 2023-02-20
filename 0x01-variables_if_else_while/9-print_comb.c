#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 9; i++)
	{
		if (i > 0)
		putchar(',');
		putchar(' ');
		putchar (i + '0');
	}
	putchar(10);
	return (0);
}
