#include "main.h"
#include <stdio.h>

/**
 * print_recur_no - prints a no with putchar only
 *
 * @n: number
 * Return: returns nothing
 */

void print_recur_no(int n)
{
	unsigned int nom = n;
	if (n < 0)
	{
		_putchar('-');
		nom *= -1;
	}

	if (n == 0)
		return;

	print_recur_no(nom / 10);
	_putchar((nom % 10) + '0');
}

/**
 * print_number - prints a no with putchar only
 *
 * @n: number
 * Return: returns nothing
 */

void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else
		print_recur_no(n);
}
