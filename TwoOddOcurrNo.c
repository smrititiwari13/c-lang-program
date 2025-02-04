
#include <stdio.h>
int OddOccurNo(int arr[],int n)
{
    int x=arr[0];
    for(int i=1;i<n;i++)
     x=x^arr[i];
     int k=(x&(~(x-1)));
     int res1=0,res2=0;
     for(int i=0;i<n;i++)
     {
      if((arr[i]&k)!=0) 
      res1=res1^arr[i];
      else
      res2=res2^arr[i];
     }
    
    printf("two odd occuring number:%d,%d",res1,res2);
    
}

int main()
{
    int n;
    printf("enter");
    scanf("%d",&n);
    int arr[n];
    printf("enter");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   OddOccurNo(arr,n);
    return 0;
}
