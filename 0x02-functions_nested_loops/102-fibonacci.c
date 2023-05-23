#include <stdio.h>

/**
 * main - computes fibonacci series.
 *
 * Return: 0.
 */
int main(void)
{
	int i;
	long long int r;
	long long int q = 1;
	long long int z = 2;

	for (i = 1; i <= 50; i++)
	{
		printf("%lld", q);
		if (i != 50)
		{
			printf(",");
			printf(" ");
		}
		r = q + z;
		q = z;
		z = r;
	}
	printf("\n");
	return (0);
}
