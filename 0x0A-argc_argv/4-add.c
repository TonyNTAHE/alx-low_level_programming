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
    int i = 1, add = 0, j = 0, k = 0;

    if (argc > 1)
    {
        while (i < argc)
        {
            j = 0;
            while (argv[i][j])
            {
                if (argv[i][j] < '0' || argv[i][j] > '9')
                {
                    printf("Error\n");
                    return (1);
                }
                j++;
            }
            add += atoi(argv[i]);
            i++;
        }
        printf("%d\n", add);
    }
    else
    {
        printf("%d\n", k);
    }

    return (0);
}
