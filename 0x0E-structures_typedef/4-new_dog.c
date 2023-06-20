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
	char *name_cpy;
	char *owner_cpy;
	int len1, len2;
	len1 = strlen(name);
	len2 = strlen(owner);
	new = malloc(sizeof(dog_t));
	if (new == NULL || name == NULL || owner == NULL)
	{
		free(new);
		return (NULL);
	}
	name_cpy = malloc((len1 + 1) * sizeof(char));
	owner_cpy = malloc((len2 + 1) * sizeof(char));
	if (name_cpy == NULL || owner_cpy == NULL)
	{
		free(name_cpy);
		free(owner_cpy);
		return (NULL);
	}
	strcpy(name_cpy, name);
	strcpy(owner_cpy, owner);
	new->name = name_cpy;
	new->owner = owner_cpy;
	new->age = age;
	return (new);
}
