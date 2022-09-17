#include "main.h"

/**
 * print_most_numbers - print nos 0-9 excluding 2 & 4
 *
 * Return: Always 0.
 */

void print_most_numbers(void)
{
int a;

for (a = 0; a < 10; a++)
{
if (a != 2 && a != 4)
{
_putchar(a + '0');
}
}
_putchar('0');
}
