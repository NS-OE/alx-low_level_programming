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

if (n < 0)
{
	putchar('-');
	n *= (-1);
}

if (n > 9)
{
	print_number(n / 10);
}
putchar((n % 10) + '0');
}
