#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: 0.
 */
int main(void)
{
	int i;
	unsigned long int a;
	unsigned long int b;
	unsigned long int r;

	a = 1;
	b = 2;
	r = 0;
	for (i = 1; i <= 98; i++)
	{
		printf("%lu", a);
		if (i != 98)
		{
			printf(",");
			printf(" ");
		}
		r = a + b;
		a = b;
		b = r;
	}
	printf("\n");
	return (0);
}
