/*10
          10
         910
        8910
       78910
      678910
     5678910
    45678910
   345678910
  2345678910
 12345678910
012345678910
 12345678910
  2345678910
   345678910
    45678910
     5678910
      678910
       78910
        8910
         910
          10


=== Code Execution Successful ===*/

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            printf(" ");
        }
        for (int k=n-i; k <=n; k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf(" ");
        }
        for (int k=i; k <=n; k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    
    return 0;
}
