#include "main.h"

/**
 * jack_bauer - print 23:59 in minutes
 *
 * Return: Always 0 (Success)
 *
 */

void jack_bauer(void)
{

int min, sec;

for (min = 0 ; min < 24 ; min++)
{
for (sec = 0 ; sec < 60 ; sec++)
{

_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar(':');
_putchar((sec / 10) + '0');
_putchar((sec % 10) + '0');
_putchar('\n');
}
}

return;
}
