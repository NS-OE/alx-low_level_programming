#include <stdio.h>

/**
 * main - writes a program that prints the no of arguments passed into it.
 *
 * @argc: command line arg count
 * @argv: command ine arg vector/array
 * Return:  O is success
 */

int main(int argc, char *argv[])
{
	if (argv)
		printf("%d\n", argc - 1);
	return (0);
}
