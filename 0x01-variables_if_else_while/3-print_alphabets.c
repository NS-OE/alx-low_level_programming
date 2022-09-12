#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch, cd;

for (cd = 'a'; cd <= 'z'; cd++)
putchar(cd);

for (ch = 'a'; ch <= 'z'; ch++)
putchar(toupper(ch));


putchar('\n');
return (0);
}
