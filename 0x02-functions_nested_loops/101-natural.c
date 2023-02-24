#include <stdio.h>

/**
 *main - Computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int sum = 0;
	int multiple;

	for (i = 1; i < 1024; i++)
	{
		multiple = 3 * i;
		if (i % 5 == 0)
		{
			multiple = 5 * i;
		}
		sum += multiple;
	}
	printf("%d", multiple);
	printf("\n");
}



