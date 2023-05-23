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
	long int q;
	long int z;

	q = 1;
	z = 2;
	for(i = 1; i <= 50; i++)
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
