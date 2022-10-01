#include <stdio.h>

/**
 * main - writes a program that prints its name even after renaming it.
 *
 * @argc: command line arg count
 * @argv: command ine arg vector/array
 * Return:  O is success
 */

int main(int argc, char *argv[])
{
      	printf("%s\n", argv[argc]);

  for (i = 0; i < argc; i++)

    printf("argv[%d} : %s\n", i, argv[i]);
  return 0;
}
