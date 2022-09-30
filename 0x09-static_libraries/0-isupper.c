#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if character is uppercase
 *
 * @c: variable denoting character
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);

else
return (0);
}
