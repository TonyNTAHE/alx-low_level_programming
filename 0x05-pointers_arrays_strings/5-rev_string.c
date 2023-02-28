#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string to reverse
 *
 * Return: nothing
 */
void rev_string(char *s)
{	
	int len = strlen(s);
	int a = 0;
       int b = len - 1;	
	while (a < b)
	{
		char temp = s[a];
		s[a] = s[b];
		s[b] = temp;
		a++;
		b--;
	}
}
