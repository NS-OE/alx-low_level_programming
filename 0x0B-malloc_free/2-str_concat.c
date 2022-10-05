#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates 2 strings
 *
 * @s1: string 1
 * @s2: string 2
 * Return: 0 is success
 */

char *str_concat(char *s1, char *s2)
{
char *x;
unsigned int i, len1, len2, lenT;

	if (s1 == NULL || s2 == NULL)
	{
		*s1 = *s2 = '\0';
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	lenT = len1 + len2 + 1;
	x = malloc(lenT * sizeof(char));
	if (x == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		x[i] = s1[i];
	for (i = 0; i < len2; i++)
		x[i + len1] = s2[i];

	return (x);

}
