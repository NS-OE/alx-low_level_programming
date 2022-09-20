#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - retruns length of a string
 *
 * @s: pointer
 * 
 * Return: Always 0.
 */
int main(void)
{
  char *str;
  int len;

  str = "My first strlen!";
  len = _strlen(str);
  printf("%d\n", len);
  return (0);
}

int _strlen(char *s)
{
  int stlen;
  char sr[17];
  sr[17] = *s;
  stlen =0;
  
  while ( sr[stlen] != '\0')
  stlen++;
   
  return (stlen);
}
