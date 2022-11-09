#include "main.h"

/**
 * _strncpy - copies to the nth index of source str to dest. string
 *
 * @n: value integer
 * @dest: destination pointer
 * @src: source pointer
 * Return: returns pointer to a char type
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, ns, nd;

	for (nd = 0; dest[nd] != '\0'; nd++)
	{
	}
	for (ns = 0; src[ns] != '\0'; ns++)
	{
	}
	for (i = 0; i < nd; i++)
	{
		if (i < n)
		{
		dest[i] = src[i];
		}
		if ((i > ns) && (i < n))
			dest[i] = '\0';
	}
	return (dest);
}
