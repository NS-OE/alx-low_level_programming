#include "main.h"
#include <stdio.h>
/**
 * print_array -  prints array with comma and space
 *
 * @a: pointer to array
 * @n: index no to be printed
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
	printf("%d",a[i]);
	if (i < (n - 1))
	{
		printf(", ");
	}
}
putchar('\n');

}
