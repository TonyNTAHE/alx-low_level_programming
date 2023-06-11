#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */

int main(int argc, char **argv)
{
int cent, m = 0, i;
int a[5] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
cent = atoi(argv[1]);
if (cent < 0)
{
printf("0\n");
}
for (i = 0; i < 5; i++)
{
if (cent >= a[i])
{
m += cent / a[i];
cent %= a[i];
}
}
printf("%d\n", m);
return (0);
}
