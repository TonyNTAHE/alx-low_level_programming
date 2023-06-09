#include "main.h"

/**
 * _isdigit - check if the number is a digit.
 * @c: character to check.
 * Return: 1 if found
 *         0 otherwise.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
return (0);
}
