#include "main.h"

/**
 * print_last_digit  - printsblast digit of a no
 *
 * @n: integer variable
 *
 * Return: Always 0 (Success)
 *
 */
int print_last_digit(int n)
{

int ldg;

ldg = n % 10;
if (ldg < 0)
{
_putchar(-ldg + 48);
return (-ldg);
}
else
{
_putchar(ldg + 48);
return (ldg);
}

}
