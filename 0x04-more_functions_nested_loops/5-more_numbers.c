#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints nos 0 to 9
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
	for (c = 0; c < 15; c++)
	{
		if (c > 9)
		{
			_putchar((c / 10) + '0');

		}
			_putchar((c % 10) + '0');
	}
	_putchar('\n');
}
}
