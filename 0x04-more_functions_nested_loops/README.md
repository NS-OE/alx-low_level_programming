Even More Nested Loops

#include <stdio.h>
Different forms of creating triangle
int main()
{
    int j, k, y = 5;
    
    for (j = 1; j <= y; j++)
    { 
        for (k = y; k > j; k--)
            printf(" ");
        for (k = 1; k <= j; k++)
            printf("#");
    
       printf("\n");
    }
     printf("\n");
     for (j = 1; j <= y; j++)
    { 
        for (k = y; k > j; k--)
            printf("#");
      
       printf("\n");
    }
   printf("\n"); 
    for (j = 1; j <= y; j++)
    { 
        for (k = 1; k <= j; k++)
            printf("#");
    
       printf("\n");
    }
     printf("\n");
     
     
     for (j = 1; j <= y; j++)
    { 
        for (k = 1; k <= j; k++)
            printf("#");
        for (k = y; k > j; k--)
            printf("1");   
    printf("\n");      
    }
    printf("\n");        
    for (j = 1; j <= y; j++)
    { 
         for (k = y; k > j; k--)
            printf("1");   
     printf("\n");
    }
     printf("\n"); 
     for (j = 1; j <= y; j++)
    { 
        for (k = 1; k <= y; k++)
            printf("1");
    
       printf("\n");
    }
}
 
