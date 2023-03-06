#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: address to destination array
 * @src: address of source array
 * @n: no of bytes in array to be filled
 * Return: returns pointer with copied area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *fin = dest;

	for (i = 0; i < n; i++)
	{
		fin[i] = src[i];
	}
	return (fin);
}
