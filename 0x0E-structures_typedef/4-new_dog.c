#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *new_dog - initialise struct dog
 *
 * @name: variable
 * @owner: variable
 * @age: variable
 * Return: the pointer d or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d, *copy;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	copy = malloc(sizeof(dog_t));
	if (copy == NULL)
		return (NULL);
	copy->name = d->name;
	copy->age = d->age;
	copy->owner = d->owner;

	if (copy->name == NULL || copy->owner == NULL)
	{
		free(copy->name);
		free(copy->owner);
		free(copy);
		return (NULL);
	}
	return (copy);
}
