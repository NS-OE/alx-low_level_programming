#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 *
 * Return: Always 0 success
 */

int main(void)
{
	int b, sum;

	for (b = 0; b < 1024; b++)
	{
		if ((b % 3 == 0) || (b % 5 == 0))
		{
			sum += b;
		}
	}
	printf("%d\n", sum);
	return (0);
}
