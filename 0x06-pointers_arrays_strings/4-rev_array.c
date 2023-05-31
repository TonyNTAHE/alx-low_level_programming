#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array.
 * @n: number of element in the array.
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i = 0, temp;
int j;

while (i < n - 1)
{
j = i + 1;
while (j > 0)
{
temp = *(a + j);
*(a + j) = *(a + (j - 1));
*(a + (j - 1)) = temp;
j--;
}
i++;
}
}
