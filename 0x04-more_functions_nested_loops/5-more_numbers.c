#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print nos 0-9 ten times
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
int a, i;
for (a = 0; a <= 10; a++)
{
for (i = 0; i < 15; i++)
{
if (i < 10)
{
_putchar(i + '0');
}
else
{
_putchar(i/10 +'0');
_putchar(i%10 +'0');
}
}
_putchar('\n');
}
}
