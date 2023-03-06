#include <stdio.h>
/**
 *	main - Entry point
 *
 *	Return: Always 0 (Success)
 */

int main(void)
{
	int plus;

	for (plus = '0' ; plus <= '9' ; plus++)
	{
		putchar(plus);
	}
	for (plus = 'a' ; plus <= 'f' ; plus++)
	{
		putchar(plus);
	}
	putchar('\n');

	return (0);
}

