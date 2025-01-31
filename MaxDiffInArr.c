#include <stdio.h>
#include<math.h>
int MaxDiff(int arr[],int n)
{
 int res=arr[1]-arr[0];
 int minValue=arr[0];
 for(int j=1;j<n;j++)
 {
     res=fmax(res,arr[j]-minValue);
     minValue=fmin(minValue,arr[j]);
 }
 return res;
}



int main()
{
    int arr[10]={2,3,10,6,4,8,1};
    int n=7;
  printf("%d",MaxDiff(arr,n));
    
    
return 0;
}
