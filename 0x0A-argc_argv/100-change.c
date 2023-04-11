#include <stdio.h>
#include <stdlib.h>

/**
 * change - writes a program that gives no of cents change
 * and prints Error if argc is not exactly 2.
 *
 * @r: command line arg count
 * Return:  r is success
 */
int change(int r)
{
	int j = 0;

		while (r != 0)
		{

			if (r >= 25)
			{
				j += r / 25;
				r = r % 25;
			}
			else if (r >= 10)
			{
				j += r / 10;
				r = r % 10;
			}
			else if (r >= 5)
			{
				j += r / 5;
				r = r % 5;
			}
			else if (r >= 2)
			{
				j += r / 2;
				r = r % 2;
			}
			else
			{
				j += r;
				r = 0;
			}
		}
		return (j);
}

/**
 * main - writes a program that gives no of cents change
 * and prints Error if argc is not exactly 2.
 *
 * @argc: command line arg count
 * @argv: command ine arg vector/array
 * Return:  O is success
 */

int main(int argc, char *argv[])
{
	int r, j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	r = atoi(argv[1]);
	if (r > 0)
	{
		j = change(r);
		printf("%d\n", j);
	}
	else
		printf("0\n");
	return (0);
}
