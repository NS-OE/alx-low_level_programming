#include "main.h"

/**
 * _isalpha  - if input character is an alphabet
 *
 * @c: integer variable
 *
 * Return: Always 0 (Success)
 *
 */
int _isalpha(int c)
{

if ((c >= 'A' && c <= 'Z') ||  (c >= 'a' && c <= 'z'))
{
return (1);
}

else
{
return (0);
}
}
