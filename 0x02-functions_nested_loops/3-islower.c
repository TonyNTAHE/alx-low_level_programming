#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: Character to ckech
 *
 * Return: Always 0.
 */
int _putchar(char c);
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return (0);
	}
}
