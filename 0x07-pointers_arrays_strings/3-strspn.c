#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: address to substring being searched
 * @accept: address of bytes needed
 * Return: returns integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				l += 1;
		}
	}

	return (l);
}
