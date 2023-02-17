#include <stdio.h>

/**
 * main - print size of data types
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	char c;
	long int t;
	long long int b;
	float A;

	printf("Size of char: %lu byte(s)\n", sizeof(c));
	printf("Size of int: %lu byte(s)\n", sizeof(i));
	printf("Size of long int: %lu byte(s)\n", sizeof(t));
	printf("Size of long long int: %lu byte(s)\n", sizeof(b));
	printf("Size of float: %lu byte(s)\n", sizeof(A));
	return (0);
}
