#include <stdio.h>
#include "main.h"

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

char plus;

for  (plus = 'a' ; plus <= 'z' ; plus++)
{
putchar(plus);
}

putchar('\n');
return;
}
