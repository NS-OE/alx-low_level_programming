#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - pointer to print_name_as_is & print_nane_uppercase
 * @name: name of the person
 * @f: pointer to function
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == &print_name_uppercase)
	{
		f = print_name_uppercase;
		(*f)(name);
	}
	else
	{
		f = print_name_as_is;
		(*f)(name);
	}
}
