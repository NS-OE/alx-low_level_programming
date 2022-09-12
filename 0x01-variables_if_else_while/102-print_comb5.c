#include <stdio.h>
/**
 * main - prints all possible combination of 2 digits b/w 0
 * and 99, seperated by space and joined with comma.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int plus, pl;

for (plus = 0 ; plus < 100 ; plus++)
{
for (pl = 0 ; pl < 100 ; pl++)
{
if (plus < pl)
{
putchar((plus / 10) + '0');
putchar((plus % 10) + '0');
putchar(' ');
putchar((pl / 10) + '0');
putchar((pl % 10) + '0');
}
if (plus != 98 || pl != 99)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');
return (0);
}
