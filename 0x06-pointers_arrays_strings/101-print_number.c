#include "main.h"

/**
 * print_number - prints an integer.
 * @n: the number.
 * Return: nothing.
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n >= 0 && n <= 9)
{
_putchar(n + '0');
}
else if (n >= 10 && n <= 99)
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
}
else if (n >= 100 && n <= 999)
{
_putchar('0' + (n / 100));
_putchar('0' + ((n / 10) % 10));
_putchar('0' + (n % 10));
}
else if (n >= 1000 && n <= 9999)
{
_putchar('0' + (n / 1000));
_putchar('0' + (n / 100) % 10);
_putchar('0' + (n / 10) % 10);
_putchar('0' + (n % 10));
}
}
