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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j + i] = src[j];
	}
	return (dest);
}
