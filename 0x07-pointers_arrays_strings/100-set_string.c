#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: string to set.
 * @to: string to be setted to.
 * Return: nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
