#include "main.h"

/**
 * _strcmp - compares 2 strings
 *
 * @s1: string 1 pointer
 * @s2: string 2 pointer
 * Return: returns int type
 */

int _strcmp(char *s1, char *s2)
{
int i, d, n;

for (i = 0; s1[i] != '\0'; i++)
{
	if (s1[i] == s2[i])
		d = 0;
	else
	{
		n = s1[i] - s2[i];
		return (n);
	}
}
return (d);
}
