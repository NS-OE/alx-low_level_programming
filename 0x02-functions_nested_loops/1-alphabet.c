#include "main.h"
#include <stdio.h>

/**
 * main - print all alphabets in lowercase
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{

print_alphabet();
return (0);

}
/**
 * print_alphabet - prints out alphabets with no return
 *
 * Return: Always 0 (Success)
 *
 */

void print_alphabet(void)
{

int  pl;

for  (pl = 'a' ; pl <= 'z' ; pl++)
{
putchar(pl);
}

putchar('\n');
return;
}
