#include "main.h"
#include <stdio.h>

/**
 * rot13 - switches by 13 characters
 *
 * @n: number
 * Return: returns nothing
 */

char *rot13(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
	if ((n[i] >= 65 && n[i] + 13 <= 90) || (n[i] >= 97 && (n[i] + 13) <= 122))
			n[i] += 13;

	else if ((n[i] <= 90 && (n[i] - 13) >= 65) || (n[i] <= 122 && (n[i] - 13) >= 97))
			n[i] -= 13;
	}
	return (n);
}
