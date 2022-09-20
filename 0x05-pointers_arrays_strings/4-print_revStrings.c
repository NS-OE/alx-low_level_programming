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

  str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
  print_rev(str);
  return (0);
}

void print_rev(char *s)
{
  int i, l;
  char tp;

  l = strlen(s);

  for (i =0; i < l/2; i++)
    {
    tp =s[i];
      s[i] = s[l - 1 - i];
  s[l - 1 - i] = tp;
    }
    putchar(s);
}
