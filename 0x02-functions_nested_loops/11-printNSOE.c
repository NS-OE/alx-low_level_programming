#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural nosfrom n to 98
 *
 * @n: integer variable
 *
 * Return: Always 0 (Success)
 *
 */

void print_to_98(int n)
{


for (min = 0 ; min < 24 ; min++)
{
for (sec = 0 ; sec < 60 ; sec++)
{
if (min < sec)
{
putchar((min / 10) + '0');
putchar((min % 10) + '0');
putchar(':');
putchar((sec / 10) + '0');
putchar((sec % 10) + '0');

if (min != 23 || sec != 59)
{
putchar('\n');
}
}
}
}

return;
}
