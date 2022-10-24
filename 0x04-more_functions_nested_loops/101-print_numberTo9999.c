#include "main.h"
#include <stdio.h>

void print_neg(int n);
/**
 * print_number - prints an integer with _putchar
 *
 * @n: int variable
 * Return: Always 0.
 */

void print_number(int n)
{

if (n >= 0 && n <= 9)
{
	_putchar(n + '0');
}
else if (n >= 10 && n <= 99)
{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
}
else if (n >= 100 && n <= 999)
{
	_putchar((n / 100) + '0');
	_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
}
else if (n >= 1000 && n <= 9999)
{
	_putchar((n / 1000) + '0');
	_putchar(((n / 100) % 10) + '0');
	_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
}
else if (n < 0)
	print_neg(n);
}

/**
 * print_neg - prints an integer with _putchar
 *
 * @n: int variable
 * Return: Always 0.
 */

void print_neg(int n)
{
int num = n * (-1);

if (n >= -9 && n < 0)
{
	_putchar('-');
	_putchar(num + '0');
}
else if (n >= -99 && n <= -10)
{
	_putchar('-');
	_putchar((num / 10) + '0');
	_putchar((num % 10) + '0');
}
else if (n >= -999 && n <= -100)
{
	_putchar('-');
	_putchar((num / 100) + '0');
	_putchar(((num / 10) % 10) + '0');
	_putchar((num % 10) + '0');
}
else if (n >= -9999 && n <= -1000)
{
	_putchar('-');
	_putchar((num / 1000) + '0');
	_putchar(((num / 100) % 10) + '0');
	_putchar(((num / 10) % 10) + '0');
	_putchar((num % 10) + '0');

}
}
