#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int plus, pl;
for (plus = 0 ; plus < 10 ; plus++)
{
for (pl = plus + 1 ; pl < 10 ; pl++)
{
if (plus != pl)
{
putchar(plus + '0');
putchar(pl + '0');
}
if (plus < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
