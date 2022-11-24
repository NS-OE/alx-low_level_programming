#include "main.h"
#include <stdio.h>
/**
 * print_number - prints a no with putchar only
 *
 * @n: number
 * Return: returns nothing
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}

	if (n == 0)
		return;

	/*if (n == 0)
		putchar('0');*/

	print_number(n / 10);
	putchar((n % 10) + '0');
}
