#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: array.
 * @size: size of the array.
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
int i = 0, sum1 = 0, sum2 = 0;
while (i < size)
{
sum1 += *(a + i * size + i);
sum2 += *(a + i * size + (size - 1 - i));
i++;
}
printf("%d, %d\n", sum1, sum2);
}
