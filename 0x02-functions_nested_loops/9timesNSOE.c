#include "main.h"
#include <stdio.h>

/**
 * main - calls time table function
 *
 * Return: Always 0 is success
 */

int main(void)
{
times_table();
return (0);
}

/**
 * times_table - prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
int i, j, mul;

for (i = 0; i <= 12;)
{
      for (j = 0; j <= 9; j++)
      {
	mul = i * j;
	if (mul >= 10 && j < 9)
	{
	  putchar((mul / 10) + '0');
	  putchar((mul % 10) + '0');
	  putchar(',');
	  putchar(' ');
	}
	else if (mul >= 10 && j == 9)
	{
	  putchar((mul / 10) + '0');
	  putchar((mul % 10) + '0');
	}
	else if (mul < 10 && j == 9)
	{
	  putchar(' ');
	  putchar(mul + '0');
	}
	else
	{
	  putchar(' ');
	  putchar((mul) + '0');
	  putchar(',');
	  putchar(' ');
	}
      }
  putchar('\n');
  i++;
}

}
