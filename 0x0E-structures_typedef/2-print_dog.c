#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 * @d: pointer to the structure.
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (p->name == NULL)
	{
		printf("(nil)\n");
	}
	if (d->age == NULL)
	{
		printf("(nil)\n");
	}
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
