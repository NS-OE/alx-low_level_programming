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
	int i, nmlen, ownlen;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	nmlen = ownlen = 0;
	while (name[nmlen++])
		;
	while (owner[ownlen++])
		;
	d->name = malloc(nmlen * sizeof(d->name));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for(i = 0; i<= nmlen; i++)
		d->name[i] = name[i];
	d->age = age;
	d->owner = malloc(ownlen * sizeof(d->owner));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for(i = 0; i<= ownlen; i++)
		d->owner[i] = owner[i];
	return (d);
}
