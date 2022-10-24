#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer with _putchar
 *
 * @n: int variable
 * Return: Always 0.
 */

void print_number(int n)
{
unsigned int nm = n;
if (n < 0)
{
	_putchar('-');
	nm = -nm;
}

if (nm > 9)
{
	print_number(nm / 10);
}
_putchar((nm % 10) + '0');
}
