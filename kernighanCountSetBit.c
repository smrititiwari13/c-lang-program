
#include <stdio.h>
int CountSetBit(int n)
{
    int count=0;
    while(n>0)
    {
     n=n&(n-1);   
     count=count+1;  
    }
    return count;
}

int main()
{
    int n;
    scanf("%d",&n);
   printf("%d",CountSetBit(n)); 
    
    return 0;
}
