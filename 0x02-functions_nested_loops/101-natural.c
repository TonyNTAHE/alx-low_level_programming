#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples 
 * of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: 0.
 */
int main()
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
	printf("The sum of multiples of 3 and 5 below %d is = %d\n", n, sum);
	return (0);
}
