#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: input number.
 * Return: nothing.
 */
void print_times_table(int n)
{
	int i;
	int j;
	int r = 1;

	if (n > 15 || n < 0)
	{
		return;
	}
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				r = i * j;
				if (j == 0)
				{
					printf("%d", r);
				}
				else
				{
					printf(", ");
					if (r < 100)
					{
						printf(" ");
					}
					if (r >= 100)
					{
						printf("%d", (r / 100));
						printf("%02d", (r % 100));
					}
					else if (r >= 10)
					{
						printf("%d", (r / 10));
						printf("%d", (r % 10));
					}
					else
					{
						printf(" %d", r);
					}
				}
			}
			printf("\n");
		}
}
