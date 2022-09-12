#include <stdio.h>
/**
 * main - prints all possible combination of 2 digits b/w 0
 * and 99, seperated by space and joined with comma.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int plus, pl, prus, pr;

for (plus = 0 ; plus < 10 ; plus++)
{
for (pl = 0 ; pl < 10 ; pl++)
{
for (prus = 0 ; prus < 10 ; ++prus)
{
for (pr = 0 ; pr < 10 ; ++pr)
{
putchar(plus + '0');
putchar(pl + '0');
putchar(' ');
putchar(prus + '0');
putchar(pr + '0');
if (pr <= 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
