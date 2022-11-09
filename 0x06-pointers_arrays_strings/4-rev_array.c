#include "main.h"

/**
 * reverse_array - Reverses content of array of integers
 *
 * @a: array pointer
 * @n: Int type
 * Return: returns nothing
 */
void reverse_array(int *a, int n)
{
	int i, tp;

	for (i = 0; i < (n / 2); i++)
	{
		tp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tp;
	}
}
