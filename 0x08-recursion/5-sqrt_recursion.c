#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n:  Sqr root variable
 * Return: returns square root or -1 (for error) to main.
 */

int _sqrt_recursion(int n)
{
	if ((n < 0) || (n % 10 != 7))
		return (-1);

	return (sqrt(n));
}
