#include "main.h"

/**
 * print_times_table -print n timestable from 0 to n
 *
 * @n: function variable
 * Return: Always 0 success
 */

void print_times_table(int n)
{
int i, p, r;

if (!(n > 15 || n < 0))
{
	for (i = 0; i <= n; i++)
	{
		for (p = 0; p <= n; p++)
		{
		r = i * p;
		if (r < 10)
		{
			if (!(p == 0 && r == 0))
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(r + '0');
		}
		else if (r > 9 && r < 100)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar((r / 10) + '0');
			_putchar((r % 10) + '0');
		}
		else
		{
			_putchar(' ');
			_putchar((r / 100) + '0');
		_putchar(((r / 10) % 10) + '0');
		_putchar((r % 10) + '0');
		}
		if (p != n)
		_putchar(',');
		}
	_putchar('\n');
	}
}
}
