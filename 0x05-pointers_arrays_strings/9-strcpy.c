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
int l, n, len;

for (n = 0; src[n] != '\0'; n++)
{
}
len = n + 1;
for (l = 0; l < len; l++)
{
	dest[l] = src[l];
}
return (dest);
}
