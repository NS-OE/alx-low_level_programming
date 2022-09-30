#include "main.h"
/**
 * _puts - print a string with newline7
 *
 * @str: pointer
 * Return: Always 0.
 */

void _puts(char *str)
{
  if (*str == '\0')
    return;

  _putchar(*str);
  _puts(str + 1);
}
