#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: address to substring being searched
 * @accept: address of bytes needed
 * Return: returns integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len, val = 0;

	len = strlen(accept);
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (s[i] == accept[j])
			{
				val += 1;
				printf("%c\n", s[i]);
			}
			switch (s[i + 1])
			{
				case ' ':
				case ',':
				case '.':
					return (val);
			}
		}
	}
	return (val);
}
