#include "main.h"

/**
 * swap_int - swaps the values of twp integers.
 * @a: pointer.
 * @b: pointer.
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
