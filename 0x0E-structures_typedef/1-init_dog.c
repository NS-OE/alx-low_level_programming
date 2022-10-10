#include "dog.h"

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
	d->name = name;
	d->age = age;
	d->owner = owner;
}


