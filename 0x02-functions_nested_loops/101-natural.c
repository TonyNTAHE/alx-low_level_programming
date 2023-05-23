#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples 
 * of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: 0.
 */
int main()
{
	int i = 3;
	int j = 5;
	int sum1 = 0;
	int sum2 = 0;
	int Total_sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum1 = sum1 + i;
		}
	}
	for (j = 5; j < 1024; j++)
	{
		if (j % 5 == 0)
		{
			sum2 = sum2 + j;
		}
	}
	Total_sum = sum1 + sum2;
	printf("The Total sum is: %d\n", Total_sum);
	return (0);
}
