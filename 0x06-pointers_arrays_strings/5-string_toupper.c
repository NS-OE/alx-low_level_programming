#include "main.h"

/**
 * string_toupper - Change lower to upper
 *
 * @s: string pointer
 * Return: returns a pointer
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
