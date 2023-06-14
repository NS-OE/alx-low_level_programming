#include <stdio.h>
#include <stdlib.h>
/**
 * main - writes a program that multiplies 2 nos from the arguments
 * and prints Error if arg is less than 2.
 *
 * @argc: command line arg count
 * @argv: command ine arg vector/array
 * Return:  O is success
 */

int main(int argc, char *argv[])
{
	int r, j;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

		r = atoi(argv[1]);
		j = atoi(argv[2]);
	printf("%d\n", r * j);
	return (0);
}
