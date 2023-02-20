#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int k = 0;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			if (k > 0)
			{ /* Print comma and space after the first combination*/
				putchar(',');
				putchar(' ');
			}
			putchar(i + '0');
			putchar(j + '0');
			k++;
		}
	}
	putchar('\n');
	return (0);
}
