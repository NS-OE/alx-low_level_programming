#include "function_pointers.h"

/**
 * array_iterator - points to function to display elements of an array
 * @array: Array of nos
 * @size: size of array
 * @action: pointer to function
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
