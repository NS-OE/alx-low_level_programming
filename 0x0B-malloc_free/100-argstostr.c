#include "main.h"
#include <stdio.h>

/**
 * argstostr - frees a 2-D grid previously created by your alloc_grid function
 * @ac: array being freed
 * @av: rows of array
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
	char *con;
	int i, j, k = 0, p = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			p++;
		p++;
	}
	p++;

	con = malloc((sizeof(char) * p));
	if (con == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			con[k] = av[i][j];
			k++;
		}
		con[k] = '\n';
		k++;
	}
	return (con);
}
