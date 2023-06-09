#include "main.h"

/**
 * _isupper - check upper case character 
 * @c: character to ckeck.
 * Return: 1 if found 
 *         0 otherwise.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
