#include <stdio.h>
#include <string.h>
int main()
{
    int i, len;
    char *s = "step on no pets";
    char tp;
    len = strlen(s);

    for (i = 0; i < len/2; i++)
    {
        if (s[i] != s[len - 1 - i]) {
            printf("0\n");
            break;
        }
        if (s[i] == s[len - 1 - i] && i == (len/2) - 1)
            printf("1\n");
    }
    

    return 0;
}

