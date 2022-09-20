#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse a string
 *
 * @s: pointer
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
int i, l;
char tp;

l = _strlen(s);
for (i = 0; i < (l / 2) ; i++)
{
tp = s[i];
s[i] = s[l - i - 1];
s[l - i - 1] = tp;
}

}
