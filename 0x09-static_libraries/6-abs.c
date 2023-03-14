#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @j: the returning number
 * Return: 0
 */
int _abs(int j)
{
	if (j < 0)
	{
		return (j * -1);
	}
	else if (j == 0)
	{
		return (0);
	}
	else
	{
		return (j);
	}
}
