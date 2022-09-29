#include "main.h"


int _sqrt_guess(int sq, int n);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n:  Sqr root variable
 * @n:  Sqr root variable
 * Return: returns square root or -1 (for error) to main.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_guess(1, n));
}

/**
 * _sqrt_guess - returns a guess on what the square of the square root no is.
 *
 * @sq:  Sqr variable
 * @n:  Sqr root variable
 * Return: returns square root or -1 (for error) to main.
 */

int _sqrt_guess(int sq, int n)
{
	if (n == sq * sq)
		return (sq);
	if (n < sq * sq)
		return (-1);

	return (_sqrt_guess(sq + 1, n));
}
