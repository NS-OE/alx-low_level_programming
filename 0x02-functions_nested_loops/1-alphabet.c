#include "main.h"

/**
 * print_alphabet - prints out alphabets with no return
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet(void)
{

char pl;

for  (pl = 'a' ; pl <= 'z' ; pl++)
{
_putchar(pl);
}

_putchar('\n');
return;
}
