#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char ch;
	char zh;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (zh = 'A'; zh <= 'Z'; zh++)
	{
		putchar(zh);
	}
	putchar('\n');
	return (0);
}
