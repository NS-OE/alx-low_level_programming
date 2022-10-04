#include "main.h"
#include <stdio.h>

void print_neg(int n);
/**
 * print_number - prints an integer with putchar
 *
 * @n: int variable
 * Return: Always 0.
 */

void print_number(int n)
{

if (n >= 0 && n <= 9)
{
	putchar(n + '0');
}
else if (n >= 10 && n <= 99)
{
	putchar((n / 10) + '0');
	putchar((n % 10) + '0');
}
else if (n >= 100 && n <= 999)
{
	putchar((n / 100) + '0');
	putchar(((n / 10) % 10) + '0');
	putchar((n % 10) + '0');
}
else if (n >= 1000 && n <= 9999)
{
	putchar((n / 1000) + '0');
	putchar(((n / 100) % 10) + '0');
	putchar(((n / 10) % 10) + '0');
	putchar((n % 10) + '0');
}
else if (n < 0)
	print_neg(n);
}

/**
 * print_neg - prints an integer with putchar
 *
 * @n: int variable
 * Return: Always 0.
 */

void print_neg(int n)
{
int num = n * (-1);

if (n >= -9 && n < 0)
{
	putchar('-');
	putchar(num + '0');
}
else if (n >= -99 && n <= -10)
{
	putchar('-');
	putchar((num / 10) + '0');
	putchar((num % 10) + '0');
}
else if (n >= -999 && n <= -100)
{
	putchar('-');
	putchar((num / 100) + '0');
	putchar(((num / 10) % 10) + '0');
	putchar((num % 10) + '0');
}
else if (n >= -9999 && n <= -1000)
{
	putchar('-');
	putchar((num / 1000) + '0');
	putchar(((num / 100) % 10) + '0');
	putchar(((num / 10) % 10) + '0');
	putchar((num % 10) + '0');

}
}
