#include "dog.h"
#include <stdio.h>
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
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}


