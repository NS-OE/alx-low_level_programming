#include "main.h"

/**
 * print_alphabet_x10 - prints out alphabets 10 times
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet_x10(void)
{

char pl;
int i;

for (i = 0 ; i < 10 ; i++)
{

for  (pl = 'a' ; pl <= 'z' ; pl++)
{
_putchar(pl);
}
_putchar('\n');
}

return;
}
