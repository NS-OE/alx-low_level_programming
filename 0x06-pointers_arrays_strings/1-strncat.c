#include "main.h"

/**
 * _strncat - concatenates 2 strings
 *
 * @n: value integer
 * @dest: destination pointer
 * @src: source pointer
 * Return: returns pointer to a char type
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		if (src[j] != '\0')
			dest[i + j] = src[j];
		else
			break;
	}
	return (dest);
}
