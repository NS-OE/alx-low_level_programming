#include "main.h"
#include <string.h>

/**
 * _strstr -  locates a substring
 * @needle: address to substring being searched
 * @haystack: address of main string to be searched
 * Return: Returns a pointer to located substring, or NULL if nnot found
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k, len, var = 0;

	len = strlen(needle);
	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (haystack[j] == needle[0])
			{
				for (k = 0; k < len; k++)
				{
					var += (haystack[j + k] - needle[i + k]);
				}
				if (var == 0)
					return (haystack + j);
			}
		}
	}
	return (NULL);
}
