
#include <stdio.h>
int fact(int n)
{
   if(n==0)
    return 0;
    else if(n==1)
    return 1; 
    else
    return fact(n-1)+fact(n-2);
    
}

int main()
{
    int n;
    int b[100];
    printf("enter number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
     b[i+1]=fact(i);
     printf("%d",b[i+1]);
    }
    printf("\n%d",b[n]);
    return 0;
}
