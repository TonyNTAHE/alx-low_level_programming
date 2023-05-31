#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array.
 * @n: number of element in the array.
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i;
for (i = n - 1; i > 0; i--)
{
printf ("%d, ", a[i]);
}
}
