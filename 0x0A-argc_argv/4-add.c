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

for (i = 0; i < argc; i++)
	if (!((atoi(argv[i]) % 10) >= 0 && (atoi(argv[i]) % 10) <= 9))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum += atoi(argv[i]);
	}
printf("%d\n", sum);

	return (0);
}
