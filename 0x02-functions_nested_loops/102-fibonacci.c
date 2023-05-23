#include <stdio.h>

/**
 * main - computes fibonacci series.
 *
 * Return: 0.
 */
int main(void)
{
	int i;
	int r;
	int q = 1;
	int z = 2;

	for (i = 1; i <= 50; i++)
	{
		printf("%d", q);
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
