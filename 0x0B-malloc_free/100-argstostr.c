#include "main.h"
#include <stdio.h>

/**
 * argtostr - frees a 2-D grid previously created by your alloc_grid function
 * @ac: array being freed
 * @av: rows of array
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	int i;
	char *con;

	if (ac == 0 || av == NULL)
		return (NULL);
	con = malloc(sizeof(av) * ac);
	for (i = 1; i < ac; i++)
		printf("%s\n", av[i]);

	return (con);
}
