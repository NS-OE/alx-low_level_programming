#include "main.h"

/**
 * main -printing n timestable from 0 to n
 *
 * print_times_table - function prototype
 * Return: Always 0 success
 */

int main(void)
{
	print_times_table(3);
	putchar('\n');
	print_times_table(5);
	putchar('\n');
	print_times_table(98);
	putchar('\n');
	print_times_table(12);
	return (0);
}

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
						putchar(' ');
						putchar(' ');
						putchar(' ');
					}
					putchar(r + '0');
				}
				else if (r > 9 && r < 100)
				{
					putchar(' ');
					putchar(' ');
					putchar((r / 10) + '0');
					putchar((r % 10) + '0');
				{
					else
					{
						putchar(' ');
						putchar((r / 100) + '0');
						putchar(((r / 10) % 10) + '0');
						putchar((r % 10) + '0');
					}
					if (p != n)
						putchar(',');
				}
				putchar('\n');
				}
			}
		}
