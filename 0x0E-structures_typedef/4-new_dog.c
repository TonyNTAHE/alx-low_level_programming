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
	char *nam;
	char *ownr;

	new = malloc(sizeof(new));
	if (new == NULL)
	{
		return (NULL);
	}
	nam = malloc((strlen(name) + 1) * sizeof(char *));
	if (nam == NULL)
		return (NULL);
	strcpy(nam, name);
	ownr = malloc((strlen(owner + 1) * sizeof(char *)));
	if (ownr == NULL)
		return (NULL);
	strcpy(ownr, owner);
	new->name = nam;
	new->owner = ownr;
	new->age = age;
	return (new);
}
