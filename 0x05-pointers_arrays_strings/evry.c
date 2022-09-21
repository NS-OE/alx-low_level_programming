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
int main(void)
{
  char *str;

  str = "0123456789";
  puts2(str);
  return (0);
}

void puts2(char *str)
{
int l;

for (l = 0; str[l] != '\0'; l++)
{
}
for (l = l/2; l < '\0'; l--)
{
putchar(str[l]);
}
putchar('\n');

}
