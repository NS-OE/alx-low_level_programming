#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - writes a program that adds the positive numbers passed to argv.
 *
 * @argc: command line arg count
 * @argv: command ine arg vector/array
 * Return:  O is success
 */

int main(int argc, char *argv[])
{
int i, sum, j;

if (argc > 2)
{
for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (!isdigit(argv[i][j]))
		{
			printf("Error\n");
			return (1);
		}
	}
	sum += atoi(argv[i]);
}
printf("%d\n", sum);
}
else
	printf("0\n");

return (0);
}
