#include "main.h"

/**
 * main - program that prints the number of arguments passed to it.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0.
 */
int main(int argc, char **argv)
{
(void)argv;
printf("%d\n", --argc);
return (0);
}
