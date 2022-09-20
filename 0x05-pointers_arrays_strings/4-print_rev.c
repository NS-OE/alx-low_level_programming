#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print string in reverse
 *
 * @s: pointer
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
int l;

for (l = 0; s[l] != '\0'; l++)
{
}
for (l = l - 1; l >= 0; l--)
{
putchar(s[l]);
}
putchar('\n');

}
