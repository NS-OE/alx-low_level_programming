#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square of a given size no.
 *
 * @size: integer variable
 * Return: Always 0.
 */

void print_square(int size)
{
int i, j;

for (i = 1; i <= size; i++)
{
	for (j = 1; j <= size; j++)
	{
		putchar('#');
	}

	putchar('\n');
}

if (size <= 0)
{
	putchar('\n');
}

}
