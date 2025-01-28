
#include <stdio.h>

int main()
{
    int n=145,sum=0;
    int i,d;
    int t=n;
    while(n>0)
    {
        d=n%10;
        int fact=1;
        for(i=1;i<=d;i++)
        {
        fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
        
    }
    if(t==sum)
    printf("strong number");
    else
    printf("not");
    return 0;
}
