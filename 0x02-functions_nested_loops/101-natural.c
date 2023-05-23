#include <stdio.h>

/**
 * main - computes and print sum of multiples of 3 and 5
 * up to 1023.
 *
 * Return: 0.
 */
int main(void)
{
	int i;
	int n = 1024;
	int sum = 0;

	for (i = 1; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
