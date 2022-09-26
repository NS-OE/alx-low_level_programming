#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagonal lines of a given no with spaces.
 *
 * @n: integer variable.
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int j, k;

for (j = 1; j <= n; j++)
{
	for (k = 1; k < j; k++)
		putchar(' ');

	putchar('\\');
	putchar('\n');

}

if (n <= 0)
{
	putchar('\n');
}

}
