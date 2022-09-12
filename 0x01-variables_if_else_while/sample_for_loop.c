#include <stdio.h>

int main(void)
{
  int i;
  for (i=10; i>=0; i--)
    {
      printf("%d", i);
    }
  printf("\n >>Blast Off<< \n");
  /**
   * newline:  Doing the 2nd printf(/n) afer any loop curly bracket stops                  * each no from being looped onto a new line
   */
  return 0;
}
