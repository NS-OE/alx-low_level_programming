#include "main.h"

/**
 * puts2 - put one othwr
 *
 * @str: pointet
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
int l, lo, i;
char *y = str;

for (l = 0; *y != '\0'; l++)
{
y++;
}
lo = l - 1;
for (i = 0; i <= lo; i++)
{
if (i % 2 == 0)
{
	putchar(str[i]);
}
}
putchar('\n');

}
