#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs.
 * @d: pointer to structure.
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
