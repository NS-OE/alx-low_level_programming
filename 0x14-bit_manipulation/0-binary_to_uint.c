#include "main.h"

/**
 * binary_to_uint - binary to decimal as unsigned int
 *
 * @b: binary character
 * Return: 0 or int
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int i, l, noB, len, tot = 0;
	char j;

	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
		j = b[i];
		noB = atoi(&j);
		l = len - 1 - i;
		tot += noB * pow(2, l);
		}
		else
			return (0);
	}
	return (tot);
}
