#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: address of string being searched
 * @c: character to be located
 * Return: Returns pointer to the first of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
