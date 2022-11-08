#include "main.h"

/**
 * _strcpy - copies string from one pointer to another
 *
 * @src: source pointer
 * @dest: destination pointer
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
int l;

for (l = 0; *(src + l) != '\0'; l++)
{
	dest[l] = src[l];
}
return (dest);
}
