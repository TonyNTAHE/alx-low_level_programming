#include "main.h"

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: pointer to the array
 * @size: size of the array.
 *
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int j;
	int sum1 = 0;
	int sum2 = 0;

	for (j = 0; j < size; j++)
	{
		sum1 += *(a + j * size + j);
		sum2 += *(a + j * size + (size - j - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}
