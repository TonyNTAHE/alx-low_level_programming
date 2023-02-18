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

	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}
