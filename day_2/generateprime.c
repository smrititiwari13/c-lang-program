#include<stdio.h>
#include<stdbool.h>
bool primeNo(int n)
{
    if(n<=1)
   return false;
    for(int i=2;i*i<=n;i++)
    {
      
            if(n%i==0)
            {
            return false;
            }
            
       
    }
    return true;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        if( primeNo(i))
        {
            printf("%d ",i);
        }
    }
   
    return 0;
}
