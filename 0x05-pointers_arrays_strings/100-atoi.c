#include "main.h"

/**
 * _atoi - Prints number variant of character
 *
 * @s: pointer to atoi character
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
	long int i, nt = 0, ptv = 1, ntv = 1, sign;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '+')
		{
			ptv *= 1;
		}
		if (s[i] == '-')
			ntv *= -1;
		sign = ptv * ntv;

		if (s[i] >= '0' && s[i] <= '9')
		{
			nt = (nt * 10) + (s[i] - '0');
			if (s[i + 1] > '9' || s[i + 1] < '0')
				break;
		}
	}
	return (sign * nt);
}
