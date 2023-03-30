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
		if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			switch (s[i])
			{
				case ' ':
				case '\n':
				case '\t':
				case ',':
				case ';':
				case '.':
				case '!':
				case '?':
				case '"':
				case '(':
				case ')':
				case '{':
				case '}':
					s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
