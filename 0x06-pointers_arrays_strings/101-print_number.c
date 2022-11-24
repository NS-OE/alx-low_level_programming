#include "main.h"

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

	if ((n / 10) == 0 && n != 10)
		return;

	if (n == 0)
		putchar('0');

	print_number(n / 10);
	putchar((n % 10) + '0');
}
