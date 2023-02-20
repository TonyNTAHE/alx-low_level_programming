#include <stdio.h>

/**
 * main - print numbers combination with 3 digits
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c, d = 0;

	for (a = 0; a <= 7; a++)
	{
		for (b = a + 1; b <= 8; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				if (d > 0)
				{
					putchar(',');
					putchar(' ');
				}
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				d++;
			}
		}
	}
	putchar('\n');
	return (0);
}
