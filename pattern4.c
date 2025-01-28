//number half pyramid
#include <stdio.h>

int main()
{
   int i,j;
   for(i=0;i<=5;i++)
   {
       for(j=1;j<=i;j++)
       {
           printf("%d",j);
       }
       printf("\n");
   }
    
    return 0;
}
