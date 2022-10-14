#include "function_pointers.h"

/**
 * int_index - points to function for element comparison
 * @array: Array of nos
 * @size: size of array
 * @cmp: pointer to function
 * Return: Index or -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ret;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		ret = cmp(array[i]);

		if (ret == 1)
			return (i);
	}
	return (-1);
}
