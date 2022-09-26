#include "main.h"
#include <stdio.h>

/**
 * print_line - print underscore for every no.
 *
 * @n: variable
 * Return: Always 0.
 */

void print_line(int n)
{
int i;

for (i = 1; i <= n; i++)
{
	_putchar('_');

	if (n <= 0)
	{
		_putchar('\n');
	}
}
_putchar('\n');
}
