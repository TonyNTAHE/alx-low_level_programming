#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char **argv)
{
int i;
int mul;

mul = 1;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
mul *= atoi(argv[i]);
}
printf("%d\n", mul);
}
else
printf("Error\n");
return (1);
}
