#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: 0.
 */
int main(void)
{
	int k;
	int l;

	for (k = 0; k <= 98; k++)
	{
		for (l = k + 1; l <= 99; l++)
		{
			putchar(k / 10 + '0');
			putchar(k % 10 + '0');
			putchar(' ');
			putchar(l / 10 + '0');
			putchar(l % 10 + '0');
			if (k != 98 || l != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
