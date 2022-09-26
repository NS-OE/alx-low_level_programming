#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle of given size
 *
 * @size: integer variable
 * Return: Always 0.
 */

void print_triangle(int size)
{
int i, j;

for (i = 1; i <= size; i++)
{
	for (j = size; j > i; j--)
		putchar(' ');

	for (j = 1; j <= i; j++)
		putchar('#');

	putchar('\n');
}
if (size <= 0)
{
	putchar('\n');
}

}
