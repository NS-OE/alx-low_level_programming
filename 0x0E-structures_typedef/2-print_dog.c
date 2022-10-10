#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints details of structure
 *
 * @d: pointer to address of strut
 */

void print_dog(struct dog *d)
{
if (d->age != 0)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "nil";
	if (d->owner == NULL)
		d->owner = "nil";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
else
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "nil";
	if (d->owner == NULL)
		d->owner = "nil";
	printf("Name: %s\nAge: nil\nOwner: %s\n", d->name, d->owner);
}
}
