#include "main.h"

/**
 * cap_string - Capitalises all words of a string
 *
 * @s: string pointer
 * Return: returns a pointer
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] == ' ' && (s[i + 1] >= 97 && s[i + 1] <= 121))
	{
		s[i + 1] -= 32;
	}
	if (s[i] == '.' && (s[i + 1] >= 97 && s[i + 1] <= 121))
	{
		s[i + 1] -= 32;
	}
	if (s[i] == '\n' && (s[i + 1] >= 97 && s[i + 1] <= 121))
	{
		s[i + 1] -= 32;
	}
	if (s[i] == '\t' && (s[i + 1] >= 97 && s[i + 1] <= 121))
	{
		s[i + 1] -= 32;
	}
	}
	return (s);
}
