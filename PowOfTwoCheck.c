
#include <stdio.h>
int PowOfTwo(int n)
{
    if((n&(n-1))==0)  
    {
       printf("yes");
    }
    else
    {
       printf("no");
       
    }
    
    
}

int main()
{
    int n;
    scanf("%d",&n);
    PowOfTwo(n);
    return 0;
}
