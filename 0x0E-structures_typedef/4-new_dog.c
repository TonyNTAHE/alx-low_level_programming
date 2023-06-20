#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: NULL if it fail.
 *         Pointer.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int len1, len2, i, j;
	len1 = strlen(name);
	len2 = strlen(owner);
	new = malloc(sizeof(new));
	if (new == NULL || name == NULL || owner == NULL)
	{
		free(new);
		return (NULL);
	}
	new->name = malloc(len1 + 1 * sizeof(char *));
	new->owner = malloc(len2 + 1 * sizeof(char *));
	if (new->name == NULL || new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		return (NULL);
	}
	i = 0;
	while (i < len1)
	{
		new->name[i] = name[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		new->owner[j] = owner[j];
		j++;
	}
	new->age = age;
	return (new);
}
