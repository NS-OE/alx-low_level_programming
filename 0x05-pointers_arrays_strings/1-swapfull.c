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
  int a;
  int b;

  a = 98;
  b = 42;
  printf("a=%d, b=%d\n", a, b);
  swap_int(&a, &b);
  printf("a=%d, b=%d\n", a, b);
  return (0);
}

void swap_int(int *a, int *b)
{
 int  swp = *a;
  *a = *b;
  *b = swp;
}
