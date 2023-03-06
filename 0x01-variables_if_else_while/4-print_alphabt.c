#include <stdio.h>

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
if (plus != 'q' && plus != 'e')
putchar(plus);

}
putchar('\n');

return (0);
}
