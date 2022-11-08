#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap values in a & b
 *
 * @a: pointer
 * @b: pointer
 * Return: Always 0.
 */
int main(void)
{
  char *str;

  str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
  _puts(str);
  return (0);
}

void _puts(char *str)
{
  int i;
  for (i = 0; str[i] != '\0'; i++)
    putchar(str[i]);
  putchar('\n');
}
