#include "main.h"


/**
 * _sqrt - returns the natural square root of a number.
 *
 * @n:  Sqr root variable
 * @m:  Sqr root variable
 * Return: returns square root or -1 (for error) to main.
 */

int _sqrt(int n, int m)
{
	if (m < 0)
		return (-1);
	if (n == m * m)
		return (m);
	return (_sqrt(n, m - 1));
}

/**
 * _sqrt_recursion - calls _sqrt
 * @n:  Sqr root variable
 * Return: returns square root or -1 (for error) to main.
 */
nt _sqrt_recursion(int n)
{
	return (_sqrt(n, n));
}
