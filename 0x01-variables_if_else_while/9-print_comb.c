#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 with commas and space
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10; i++)
	{
		putchar (i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
