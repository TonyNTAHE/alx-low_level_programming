#ifndef DOG_H
#define DOG_H
#include <stddef.h>
/**
 * struct dog - a dog's structure
 * @name: the name of the dog
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif