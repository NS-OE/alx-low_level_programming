#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int plus;
for (plus = 0 ; plus < 10  ; plus++)
{
putchar(plus + '0');

if (plus < 9)
putchar(',');

}
putchar('\n');
return (0);
}
