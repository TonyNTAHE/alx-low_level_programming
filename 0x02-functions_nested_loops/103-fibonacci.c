#include <stdio.h>

/**
 * fib_sum - computes the sum of even values in the sequence
 * @limit: the limit number that can not be excessed.
 *
 * Return: the sum.
 */
int fib_sum(long int limit)
{
	long int r;
	long int q;
	long int z;
	long int sum = 0;

	q = 1;
	z = 2;
	while (q <= limit)
	{
		if (q % 2 != 1)
		{
			sum += q;
		}
		r = q + z;
		q = z;
		z = r;
	}
	return (sum);
}

/**
 * main - print the sum.
 *
 * Return: 0.
 */
int main(void)
{
	long int n = 4000000;
	long int result = fib_sum(n);

	printf("%ld", result);
	printf("\n");
	return (0);
}
