
#include <stdio.h>
int firstlargest(int *ar,int n)
{
    int larg=ar[0];
    int second=ar[1];
    for(int i=1;i<n;i++)
    {
       if(ar[i]>larg)
       {
           larg=ar[i];
       }
    }
    return larg;
   
}


int main()  
{
    int ar[]={3,4,11,1,5,8,9};
    int n=7;
   printf("%d",firstlargest(ar,n));
    return 0;
    return 0;
}
