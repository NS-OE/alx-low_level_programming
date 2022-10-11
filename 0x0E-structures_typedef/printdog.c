#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints details of structure
 *
 * @d: pointer to address of strut
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		d->name = "nil";
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		d->owner = "nil";
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

}
