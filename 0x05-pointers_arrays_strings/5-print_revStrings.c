#include <stdio.h>
#include <string.h>

void print_rev1(char *s);
/**
 * print_rev - print string in reverse
 *
 * @s: pointer
 * 
 * Return: Always 0.
 */
int main(void)
{
  char str[] = "I do not fear computers. I fear the lack of them - Isaac Asimov";
  print_rev1(str);
  printf("%s\n", str);
  return (0);
}

void print_rev1(char *s)
{
  int i, l;
  char tp;

  l = strlen(s);
  printf("%d\n", l);
  puts(s);
  putchar('\n');

  for (i = 0; i < (l / 2); i++)
    {
      tp = s[i];
      s[i] = s[l-1-i];
      s[l-1-i] = tp;
    }
}
