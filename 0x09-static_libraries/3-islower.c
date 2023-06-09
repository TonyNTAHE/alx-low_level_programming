#include "main.h"

/**
 * _islower - check for lower case character.
 * @c: character.
 * Return: 1 if found
 *         0 otherwise.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
