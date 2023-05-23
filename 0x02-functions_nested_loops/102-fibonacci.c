#include <stdio.h>

/**
 * main - computes fibonacci series.
 *
 * Return: 0.
 */
int main(void)
{
	int i;
	long int r;
        long int q = 1;
	long int z = 2;

	for (i = 1; i <= 50; i++)
	{
		printf("%ld", q);
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
