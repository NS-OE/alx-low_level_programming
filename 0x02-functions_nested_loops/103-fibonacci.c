#include <stdio.h>
/**
 * main - print fibonnacci numbers up to 4million
 *
 * Return: Always 0 success
 */

int main(void)
{
unsigned long int b, bt, b0 = 0, b1 = 1, f = 0, total = 50;

	for (b = 0; b < total; b++)
	{
		bt = b0 + b1;
		b0 = b1;
		b1 = bt;
		if (bt <= 4000000 && (bt % 2) == 0)
		{
			f += bt;
		}

	}
	printf("%ld", f);
	putchar('\n');
	return (0);
}
