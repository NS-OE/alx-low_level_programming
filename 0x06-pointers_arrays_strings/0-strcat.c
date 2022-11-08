#include "main.h"

/**
 * _strcat - concatenates 2 strings
 *
 * @dest: destination pointer
 * @src: source pointer
 * Return: returns pointer to a char type
 */

char *_strcat(char *dest, char *src)
{
	int i, n, nd, len;

	for (n = 0; src[n] != '\0'; n++)
	{
	}
	for (nd = 0; dest[nd] != '\0'; nd++)
	{
	}
	len = n + nd;
	n = 0;
	for (i = nd; i < len; i++)
	{
		dest[i] = src[n];
		n++;
	}
	return (dest);
}
