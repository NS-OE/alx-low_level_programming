#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) {

  int n, l_dg;
  printf("Insert a string of numbers:\n");
  scanf("%d", &n);

  l_dg = n % 10;

  if (l_dg > 5)
    {
      printf("Last digit of %d is %d and is greater than 5\n", n, l_dg);
    }
  if (l_dg == 0)
    {
      printf("Last digit of %d is %d and is 0\n", n, l_dg);
    }
  if (l_dg < 6 && l_dg != 0)
    {
      printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_dg);
    }
  return (0);
}
