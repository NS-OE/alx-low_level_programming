#include "main.h"

/**
 * _strlen_recursion - return the string length with recursion
 *
 * @s: pointer to string.
 * Return: returns length to main.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
