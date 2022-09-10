#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int plus;

for (plus = 'a' ; plus <= 'z' ; plus++)
{
  putchar(_strrev(plus));

}
putchar('\n');

return (0);
}
