
#include <stdio.h>
int fact(int n)
{
   if(n==0)
    return 0;
    else
    return n+fact(n-1);
}

int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    int a= fact(n);
    printf("%d",a);
    return 0;
}
