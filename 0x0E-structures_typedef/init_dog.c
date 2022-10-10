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
int main(void)
{
struct dog my_dog;

init_dog(&my_dog, "Poppy", 3.5, "Bob");
printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
return (0);
}

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}


