#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * init_dog - initialise struct dog
 *
 * @name: variable
 * @d: pointer
 * @owner: variable
 * @age: variable
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
return (d);
}


