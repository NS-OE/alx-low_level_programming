#include "main.h"

/**
 * factorial - returns the fatorial of a given no.
 *
 * @n: factorial variable
 * Return: returns length to main.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
