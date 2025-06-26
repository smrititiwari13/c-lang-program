
#include <stdio.h>
int sum(int *ar,int n,int t)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(ar[i]+ar[j]==t)
        printf("%d,%d",i,j);
        }
    }
    return 0;
   
}


int main()  
{
    int ar[]={3,4,2};
    int n=3;
    int t=5;
    sum(ar,n,t);
    return 0;
}
