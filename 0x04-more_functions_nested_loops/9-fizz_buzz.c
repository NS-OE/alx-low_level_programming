#include <stdio.h>

/**
 * main - prints Fizz and Buzz for multiples of 3 & 5
 *
 * Return: Always 0 Success
 */

int main(void)
{
int fz, j;

j = 1;

printf("%d", j);

for (fz = 2; fz <= 100; fz++)
{
	if ((fz % 3 == 0) && (fz % 5 == 0))
		printf(" FizzBuzz");

	else if (fz % 3 == 0)
		printf(" Fizz");

	else if (fz % 5 == 0)
		printf(" Buzz");

	else
		printf(" %d", fz);
}
putchar('\n');;
return (0);
}
