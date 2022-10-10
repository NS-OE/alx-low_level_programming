#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints details of structure
 *
 * @d: pointer to address of strut
 */
int main(void)
{
  /*  struct dog my_dog;

  my_dog.name = NULL;
  my_dog.age = 0;
  my_dog.owner = NULL;*/
  print_dog(NULL);
  return (0);
}
void print_dog(struct dog *d)
{

	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "nil";
	if (d->owner == NULL)
		d->owner = "nil";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
