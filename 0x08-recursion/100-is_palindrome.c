#include "main.h"
/**
 * _strlen - Checks length of string
 *
 * @s:  pointer to string
 * Return: returns 1 or 0 to main.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen(s + 1) + 1);
}

/**
 * is_drome - checks returns 1 if a string is a palindrome and 0 if not
 * @s: string being checked
 * @p: string length
 * Return: returns int.
 */

int is_drome(int p, char *s)
{
	if (*s == '\0')
		return (1);

	if (*s == s[p - 1])
		return (is_drome(p - 2, s + 1));

	else
		return (0);
}
/**
 * is_palindrome - checks returns 1 if a string is a palindrome and 0 if not
 * @s: string being checked
 * Return: returns 1 or 0 to main.
 */
int is_palindrome(char *s)
{
	int p;

	p = _strlen(s);
	if (*s == s[p - 1])
		return (is_drome(p - 2, s + 1));

	else
		return (0);
}
