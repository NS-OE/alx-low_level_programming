#include "main.h"

/**
 * puts_half - prints 2nd half of string
 *
 * @str: pointet
 *
 * Return: Always 0.
 */
int main(void)
{
  char *str;

  str = "0123456789";
  puts_half(str);
  return (0);
}

void puts_half(char *str)
{
  int l, lo, i;

  for (l = 0; *str != '\0'; l++)
    {
      str++;
    }
  lo = l - 1;
  for (i = 0; i <= lo; i++)
    {
      if (i % 2 == 0)
      {
	putchar(str[i]);
      }
    }
  putchar('\n');
  /*for(i = 0; i > (l / 2) && i <= l; i++)
    {
      str++;
      
    }*/
 
}
  
