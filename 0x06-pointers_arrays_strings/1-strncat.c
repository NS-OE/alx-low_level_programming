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
	int i, ns, nd, len;

	for (ns = 0; src[ns] != '\0'; ns++)
	{
	}
	for (nd = 0; dest[nd] != '\0'; nd++)
	{
	}
	len = ns + nd;
	ns = 0;
	for (i = nd; i < len; i++)
	{
		if (ns < n)
		{
		dest[i] = src[ns];
		ns++;
		}
	}
	return (dest);
}
