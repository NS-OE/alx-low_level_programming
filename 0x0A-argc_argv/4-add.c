#include <stdio.h>
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
int i, sum;

if (argc > 2)
{
for (i = 1; i < argc; i++)
	if (atoi(argv[i]) != 0)
	{
		sum += atoi(argv[i]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
printf("%d\n", sum);
}
else
	printf("0\n");

return (0);
}
