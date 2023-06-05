#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "0123467tony";
    char *f = "0123456789";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
