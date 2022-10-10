#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *new_dog - initialise struct dog
 *
 * @name: variable
 * @d: pointer
 * @owner: variable
 * @age: variable
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
return (0);
}
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;
	char *nm, *own;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	*nm = d->name = name;
	d->age = age;
	*own = d->owner = owner;

	return (d);
}


