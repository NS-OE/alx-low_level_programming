#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char d;
long int a;
long long int c;
float f;

printf("Size of a char: %lu byte(s)\n", (signed long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (signed long)sizeof(i));
printf("Size of a long int: %lu byte(s)\n", (signed long)sizeof(a));
printf("Size of a long long int: %lu byte(s)\n", (signed long)sizeof(c));
printf("Size of a float: %lu byte(s)\n", (signed long)sizeof(f));
return (0);
}
