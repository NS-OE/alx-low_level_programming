#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values in a & b
 *
 * @a: pointer
 * @b: pointer
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int  swp = *a;
*a = *b;
*b = swp;
}
