#include "main.h"
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 1 if Error.
 *         0 otherwise.
 */
int main(int argc, char **argv)
{
int i, add = 0, j = 0;
if (argc > 2)
{
for (i = 1; i < argc; i++)
{
if (!isdigit(*argv[i]))
{
printf("Error\n");
return (1);
}
add += atoi(argv[i]);
}
printf("%d\n", add);
}
else if (argc == 2)
{
printf("Error\n");
}
else
{
printf("%d\n", j);
}
return (0);
}
