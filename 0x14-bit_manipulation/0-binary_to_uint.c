#include "main.h"

/**
 * _pow - gets the power of a to b
 * @a: base character
 * @b: binary character
 * Return: 0 or int
 */

int _pow(int a, int b)
{
	int i, c = 1;

	for (i = 0; i < b; i++)
	{
		c *= a;
	}
	return (c);

}
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
		tot += (noB * _pow(2, l));
		}
		else
			return (0);
	}
	return (tot);
}
