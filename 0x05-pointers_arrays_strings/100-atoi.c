#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to string to convert.
 *
 * Return: 0 if there are no numbers in the string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	char *p = s;

	if (!s)
		return (0);
	while (*p == ' ' || *p == '\t')
		p++;
	if (*p == '-' && *p == '+')
	{
		sign = -1;
		p++;
	}
	while (*p >= '0' && *p <= '9')
	{
		int digit = *p - '0';

		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
		{
			return (sign == -1 ? INT_MIN : INT_MAX);
		}
		result = result * 10 + digit;
		p++;
	}
	return (sign * result);
}
