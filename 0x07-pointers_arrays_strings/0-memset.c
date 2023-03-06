#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: address to memory of array
 * @b: constant character byte
 * @n: no of bytes in array to be filled
 * Return: returns pointer with new byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *new = s;

	for (i = 0; i < n; i++)
	{
		new[i] = b;
	}
	return (new);
}
