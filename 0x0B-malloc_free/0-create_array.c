#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array initialised to a specific char
 *
 * @size: size of array
 * @c: character value in each array.
 * Return: 0 is success
 */

char *create_array(unsigned int size, char c)
{
char *x;
unsigned int i;

if (size > 0)
{
	x = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		x[i] = c;
	return (x);
}
else
	return (NULL);
}
