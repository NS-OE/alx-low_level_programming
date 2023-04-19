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
	struct dog *d;
	char *nam;
	char *own;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = nam = name;
	d->age = age;
	d->owner = own = owner;

	return (d);
}


