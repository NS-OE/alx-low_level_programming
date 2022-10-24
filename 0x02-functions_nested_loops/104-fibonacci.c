#include <stdio.h>
/**
 * main - prints 50 fibonnaci numbers
 *
 * Return: Always 0 success
 */

int main(void)
{
unsigned long int b, bt, b0 = 1, b1 = 2, total = 100;

	printf("%ld, %ld, ", b0, b1);
	for (b = 2; b < total; b++)
	{
		bt = b0 + b1;
		b0 = b1;
		b1 = bt;
		printf("%ld", bt);
		if (b < 99)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
