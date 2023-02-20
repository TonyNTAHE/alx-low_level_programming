#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int n = 0;

	for (i = 0; i <= 8; i++)
	{
		for (j = 1; j <= 9; j++, n++)
		{
			if (n > 0)
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i + '0');
			putchar(j + '0');
		}
	}
	putchar('\n');
	return (0);
}
