#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - points to a duplicate of the entered string
 *
 * @str: character of string.
 * Return: 0 is success
 */

char *_strdup(char *str)
{
char *x;
unsigned int i, len;

len = strlen(str) + 1;
if (str == NULL)
{
	return (NULL);
}
	x = malloc(sizeof(char) * len);
	if (x == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		x[i] = str[i];
	return (x);

}
