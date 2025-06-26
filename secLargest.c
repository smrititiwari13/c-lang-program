
#include <stdio.h>
int seclargest(int *ar,int n)
{
    int larg=ar[0];
    for(int i=1;i<n;i++)
    {
       if(ar[i]>larg)
       {
           larg=ar[i];
       }
    }
    int sec=ar[0];
    for(int i=1;i<n;i++)
    {
        
        if(ar[i]>sec&& ar[i]<larg)
        sec=ar[i];
    }
    printf("%d",sec);
    
    return 0;
   
}


int main()  
{
    int ar[]={1,2,3,4,5,6,7,8};
    int n=8;
   seclargest(ar,n);

    return 0;
}
