#include "main.h"

/**
 * print_times_table - prints the times table of n
 *
 * Return: no return
 */
void print_times_table(int n)
{
int i, j, mul;

 if (n <= 15 && n > 0)
 {
 for (i = 0; i <= n;)
{
      for (j = 0; j <= n; j++)
      {
	mul = i * j;
	if (mul >= 10 && j < n && mul < 100)
	{
	  _putchar(' ');
	  _putchar((mul / 10) + '0');
	  _putchar((mul % 10) + '0');
	  _putchar(',');
	  _putchar(' ');
	}
	else if (mul > 99 && j < n)
	  {
	    _putchar((mul / 100) + '0');
            _putchar(((mul / 10) % 10) + '0');
	    _putchar((mul % 10) + '0');
	    _putchar(',');
	    _putchar(' ');
	  }
	else if (mul > 99 && j == n)
	  {
	    _putchar((mul / 100) + '0');
            _putchar(((mul / 10) % 10) + '0');
	    _putchar((mul % 10) + '0');
	  }
	
	else if (mul >= 10 && j == n)
	{
	  _putchar(' ');
	  _putchar((mul / 10) + '0');
	  _putchar((mul % 10) + '0');
	}
	else if (mul < 10 && j == n)
	{
	  _putchar(' ');
	  _putchar(' ');
	  _putchar(mul + '0');
	}
	else
	{
	  _putchar(' ');
	  _putchar(' ');
	  _putchar((mul) + '0');
	  _putchar(',');
	  _putchar(' ');
	}
      }
  _putchar('\n');
  i++;
}
}
}
