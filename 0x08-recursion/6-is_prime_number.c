#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n:  prime no variable
 * Return: returns 1 or 0 to main.
 */

int is_prime_number(int n)
{
	if ((n == 2) || (n == 3) || (n == 5) || (n == 7))
		return (1);
	if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0) || (n % 7 == 0) && (n >= 2))
		return (1);
	else
		return (0);
}
