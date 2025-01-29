#include<stdio.h>
int PowOfTwo(int n)
{
    if(n==0)
    return 1;
    else
    return 2*PowOfTwo(n-1);
}
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    int a=PowOfTwo(n);
    printf("%d",a);
    return 0;
}
