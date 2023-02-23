#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59.
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 0; h < 24; m++)
	{
		for (m = 0; m < 60; m++)
		{ 
			printf("%d:%02d\n", h, m);
			if (m == 59)
			{
				h+= 1;
			}
		}
	}
}
