#include <stdio.h>
/**
 * main - prints all possible combination of three digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int plus, pl, plu;
for (plus = 0 ; plus < 10 ; plus++)
{
for (pl = plus + 1 ; pl < 10 ; pl++)
{
for (plu = pl + 1 ; plu < 10 ; plu++)
{
putchar(plus + '0');
putchar(pl + '0');
putchar(plu + '0');

if (plus < 7)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
