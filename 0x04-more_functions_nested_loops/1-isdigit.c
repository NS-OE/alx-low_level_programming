#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if character is a digit b/w 0-9
 *
 * @c: variable denoting character
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}

else
return (0);
}
